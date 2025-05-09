def Stud_help_chatbot() :
    print("Hello! Welcome to PREC Loni...")
    print("I'm a student helper chatbot here to help you")
    print("Feel free to ask me anything:")

    while True :
        user_input = input("You:" ).lower()

        if "adress" in user_input or "location" in user_input or "contact" in user_input:
            print("THE PREC College is at Loni-Sangamner Road, Loni BK, Maharashtra, India")
            print("You can also contact to us at: 1234567890")
        elif "branch" in user_input or "department" in user_input:
            print("There are 10 different branchs in our college. Namely as below :\n")
            print("1. Computer \n2. IT \n3. ENTC \n4. ECE \n5. Chemical \n6. Mechanical \n7. Civil \n8. Automation & Robotics \n9. Instrumentation \n10. AIDS")
        elif "canteen" in user_input or "food" in user_input or "lunch" in user_input:
            print("There are two canteen in our college")
            print("One at left side and another at right side namely 'open space canteen' and 'closed canteen'")
        elif "library" in user_input or "books" in user_input or "study  area" in user_input:
            print("Yess! There is library facility provided to all students , avail at 9 am to 5 pm on working days. \nThe time is extended upto 11 pm at the time of exams")
        elif "hostel" in user_input or "room" in user_input:
            print("Our college provides hostel facility for both boys ('Aryabhatta' & 'Bhaskar') as well as girls (at north campus). \nAlso new hostel building for more intake are under construction")
        elif "bye" in user_input or "exit" in user_input:
            print("Thank you for visiting!!! \nHope you will come again")
            return
        else:
            print("Sorry i didn't understand. \nTry to elaborate it or you can contact to 1234567890 for further inquiry")

Stud_help_chatbot()