import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
import matplotlib.pyplot as plt

data = pd.read_csv(
    r"C:\Users\hp\.vscode\C++Programing(sem3)\Abhinav-s-coding-journey\Python\Machine Learning\Housing.csv"
)

print(data.shape)   # rows, columns
print(data.columns)

#We will predict the Price of the houses using the area as metric. 

x = data[['area']]  #2D
y = data['price']   #1D

X_train,X_test,y_train,y_test = train_test_split(x,y,test_size=0.2, random_state = 5)

model = LinearRegression()
model.fit(X_train,y_train)

y_pred = model.predict(X_test)

print("printing first five prediction")
print(y_pred[:5])



plt.scatter(X_test, y_test, label="Actual Prices")
plt.plot(X_test, y_pred, color="red", label="Predicted Line")
plt.xlabel("Area")
plt.ylabel("Price")
plt.legend()
plt.show()






