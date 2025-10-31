# Grade Management System using loop for multiple students
num = int(input("Enter number of students: "))

for i in range(num):
    student = input("Enter student name: ")
    grade = float(input("Enter student grade: "))
    if grade >= 90:
        print(f"Congratulations {student}! You have achieved an A grade.")
    elif grade >= 80:
        print(f"Well done {student}! You have achieved a B grade.")
    elif grade >= 70:
        print(f"Good job {student}! You have achieved a C grade.")
    else:
        print(f"Keep trying {student}! You have achieved a D grade.")
    print() 