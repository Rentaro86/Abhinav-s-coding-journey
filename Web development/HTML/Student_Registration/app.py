from flask import Flask, render_template, request, redirect
import xml.etree.ElementTree as ET

app = Flask(__name__)

# ---------------- LOGIN PAGE ----------------
@app.route("/")
def login():
    return render_template("index.html")

# ---------------- AUTHENTICATION ----------------
@app.route("/auth", methods=["POST"])
def auth():
    uid = request.form["uid"]
    password = request.form["password"]

    tree = ET.parse("users.xml")
    root = tree.getroot()

    for user in root.findall("user"):
        if user.find("uid").text == uid and user.find("password").text == password:
            return redirect("/details")

    return "Invalid UID or Password"

# ---------------- DETAILS PAGE ----------------
@app.route("/details")
def details():
    return render_template("details.html")

# ---------------- SAVE DATA ----------------
@app.route("/save", methods=["POST"])
def save():
    tree = ET.parse("details.xml")
    root = tree.getroot()

    student = ET.SubElement(root, "student")

    ET.SubElement(student, "name").text = request.form["name"]
    ET.SubElement(student, "email").text = request.form["email"]
    ET.SubElement(student, "mobile").text = request.form["mobile"]
    ET.SubElement(student, "gender").text = request.form["gender"]
    ET.SubElement(student, "courses").text = ",".join(request.form.getlist("course"))
    ET.SubElement(student, "hobbies").text = ",".join(request.form.getlist("hobby"))
    ET.SubElement(student, "city").text = request.form["city"]

    tree.write("details.xml")
    return "Data Saved Successfully"

# ---------------- RUN APP ----------------
app.run(debug=True)
