#include "DynamicallyAllocatedDogs.h"

DynamicallyAllocatedDogs::DynamicallyAllocatedDogs()
{
	Dog* dog1Ptr = new Dog("Freyja", "German Shepard");
	Dog* dog2Ptr = new Dog("Pleiades", "German Shepard");
	Dog* dog3Ptr = new Dog("Payton", "Labrador Retriever");

	cout << "Using the -> member access" << endl;
	cout << "dog1Ptr->GetName(): " << dog1Ptr->GetName() << " dog1Ptr->GetBreed(): " << dog1Ptr->GetBreed() << endl;
	cout << "dog2Ptr->GetName(): " << dog2Ptr->GetName() << " dog2Ptr->GetBreed(): " << dog2Ptr->GetBreed() << endl;
	cout << "dog3Ptr->GetName(): " << dog3Ptr->GetName() << " dog3Ptr->GetBreed(): " << dog3Ptr->GetBreed() << endl;
	
	cout << endl;

	cout << "Using dereferencing and the dot operator to get access to members" << endl;
	cout << "(*dog1Ptr).GetName(): " << (*dog1Ptr).GetName() << " (*dog1Ptr).GetBreed(): " << (*dog1Ptr).GetBreed() << endl;

	delete dog1Ptr;
	delete dog2Ptr;
	delete dog3Ptr;

	dog1Ptr = nullptr;
	dog2Ptr = nullptr;
	dog3Ptr = nullptr;

}
