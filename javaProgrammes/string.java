public class string {
    public static void main(String[] args) {
        String name = "Abhinav";
        String surname = "PRASAD";
        System.out.println("captilize all the letter" + name.toUpperCase());
        System.out.println("Lower case all the letter " + surname.toLowerCase());
        System.out.println("length of string " + name.length());
        System.out.println("character at the given index " + name.charAt(3));
        System.out.println("Trimming the word " + name.trim() + "");
        System.out.println("print from start to finish point " + surname.substring(1,4));
        System.out.println("find whether the word or letter is containing in the string" + surname.contains("rasa"));
        System.out.println("Find the index of word or letter" + surname.indexOf("a"));
        System.out.println("Find the last index of a letter " + surname.lastIndexOf("a"));
        System.out.println("Replace a word for word " + surname.replace("Abhinav","Aditya"));
        System.out.println("Concatination to connect two words " + name.concat(surname));
        System.out.println("Find if the string starts with given word " + name.startsWith("nahi") );
        System.out.println("Find if the word ends with given word " + surname.endsWith("ad"));
        System.out.println("Check if the string variable is empty " + name.isEmpty());


    }
    
}
