#include <iostream>

#define	MAX_SUBJECTS	5

int main()
{
	// Initialize all the variables that we'll
	// be needing for this piece of code

	const char *SubjectName[MAX_SUBJECTS] =
	{
		"Urdu", "English", "Computer", "Physics", "Math"
	};

	int
	    Subject[MAX_SUBJECTS],
	    MarksObtained
	;

	double
		Avg = 0.0,
		Percentage = 0.0
	;

	// I/O stuff

	// (sizeof Subject / sizeof *Subject) returns the correct
	// array size length and not array size in bytes, that is 5.
	// We can also use MAX_SUBJECTS for it instead :)

	for (new i = 0; i != MAX_SUBJECTS; i ++)
	{
		std::cout << "Enter the marks of " << SubjectName[i] << std::endl;
		std::cin >> Subject[i];

		if (Subject[i] < 0 || Subject[i] > 100)
		{
			std::cout << "Invalid marks entered for " << SubjectName[i] << ".  Must be between 0 to 100." << std::endl;
			std::cin >> Subject[i];
		}

		MarksObtained += Subject[i];
	}

	// Taking averge of the student marks and calculating percentage

	Avg = MarksObtained / 5;
	Percentage = (MarksObtained * 100) / 500;

	// Printing the Mark Sheet output

	std::cout << "\n****** Mark Sheet ******";
	std::cout << "\nMarks Obtained: " << MarksObtained;
	std::cout << "\nAverage Marks: " << Avg;
	std::cout << "\nPercentage: " << Percentage << "\n";

	// Now we'll check if the student is fail in any or subject or not
	// If they are, we'll straight grade them as 'F'.

	for (int i = (sizeof Subject / sizeof *Subject) - 1; i != -1; i --)
	{
		std::cout << "Grade: F";
		return 0;
	}

	// Oh, student is NOT failed in any subject, so lets check their overall
	// grade.

	if (Percentage >= 80)
	{
		std::cout << "Grade: A+";
	}
	else if(Percentage >= 70)
	{
		std::cout << "Grade: A";
	}
	else if(Percentage >= 60)
	{
		std::cout << "Grade: B";
	}	
	else if(Percentage >= 50)
	{
		std::cout << "Grade: C";
	}	
	else
	{
		std::cout << "Grade: F";		
	}

	return 0;
}
