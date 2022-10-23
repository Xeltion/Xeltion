#Creating a short DATABASE
from datetime import datetime
#call for input of some kind
#store it in database
print("")
print("WELCOME TO THE DITTY DATABASES!\n")
print("You can establish the No. of Entries the database will have, and can modify them later.")
print("")
print("------------------------------------------------------------------------------------------------------------------")
print("")
i=1

Ans=input("Do you want to write a New Entry? (Y/N): ")
while Ans=="Y" or Ans=="y":
    if i==1:
        print("")
        print("Entry No. ", i)
        print("")
        Name = input("Name:")
        Id = input("Identification No. :")
        time = datetime.now()
        print("Details of Entry :", time)
        file = open("Ditty_Data.txt", "w")
        L = [Name, Id, time]
        rec ="RECORD: \n" + str(L[0]) + "  |  " + str(L[1]) + "  |  " + str(L[2])
        file.write(rec)
        file.close()
        print("")
        Ans = input("Do you want to add something? (Y/N):")
        if Ans=="Y" or"y":
            i=i+1
        else:
            print("INVALID INPUT!")
            break
    else:
        print("")
        print("Entry No. ", i)
        print("")
        Name = input("Name:")
        Id = input("Identification No. :")
        time = datetime.now()
        print("Details of Entry :", time)
        file = open("Ditty_Data.txt", "a")
        L = [Name, Id, time]
        rec ="\n" + str(L[0]) + "  |  " + str(L[1]) + "  |  " + str(L[2])
        file.write(rec)
        file.close()
        print("")
        Ans = input("Do you want to add something? (Y/N):")
        if Ans=="Y" or"y":
            i=i+1
        else:
            break
