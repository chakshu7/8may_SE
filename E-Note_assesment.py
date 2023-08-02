import datetime
Menu ='''

=============== Welcome to pythone E-note. =====================
                    
                press 1 to Generate Note.
                press 2 to View Note.
                press 4 to Exit.'''

print(Menu)

f = open("E-Note_Asses.txt","w")
f.close
def note():
    global EnoteTitle,EnoteGen,Enote,Enotedate
    Enotedate = datetime.datetime.now()
    line = ("----------------------------------------")
    print("-------------------")
    print(Enotedate)
    EnoteTitle = input("Enter Python E-Note Title : ")
    EnoteGen =  input("Enter Python E-Note Generator : ")
    Enote =  input("Enter Python E-Note : ")
    print("--------------------")
    f = open("E-Note_Asses.txt","a")
    f.write("\n"+line)
    f.write("\n Date & Time :"+str(Enotedate))
    f.write("\nE-Note Title : "+EnoteTitle)
    f.write("\nE-Note Generator Name : "+EnoteGen)
    f.write("\nE-Note Description : "+Enote)
    f.write("\n"+line)
    f.close

def readnote():
    f = open("E-Note_Asses.txt","r")
    print(f.read())
    f.close


status = True

while status:
    choice = int(input("Enter your choice : "))

    if choice == 1 :
        note()
        

    elif choice == 2:
        readnote()
        

    elif choice == 4:
        break
        status = False

    else:
        break




