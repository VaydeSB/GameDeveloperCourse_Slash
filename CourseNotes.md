#	COURSE NOTES
These course notes are for the Udemy Course: Unreal Engine 5 C++ The Ultimate Game Developer Course

* Best Viewed in github or IDE.

You can find the course here:
https://www.udemy.com/course/unreal-engine-5-the-ultimate-game-developer-course/?couponCode=KEEPLEARNING

##	Structure
These notes are being taken here in plain text as to not be distracted by WP nuances.  The formatting may change over time as I learn more about .md formatting.

After a HD failure, my progress was deleted without repair.  I'm implimenting version control to have an ease of re-entry if a HD/Data failure happens in the future.  As of this writing, I am/was on lecture 181 and am reviewing the entire course to regain my place.  I don't remember the individual steps taken to simulate progression, so Im just accepting the loss and retaking the course.   I estimate that my time to catch up will be far faster than the time that it took to initially reach that spot, and I can use the overall review.

I am skipping Section 2: Realistic Landscapes until the landscapes created there are actually needed inside of the course.  There are 4 hours of lectures there that expertely introduce you to the enviornment creation system in UE, but once you complete it you don't return to it at all.  My stoppiing point was in Section 18, and the learnings covered in Section 2 were not touched once Section 3 was started.   I will review it once we are prompted to return to it and will notate it.

The course notes here, and the git commits, -should- match up by #.  I make myself no promises to keep it aligned, but I will strive to do so.

# Section 2:9. Assets now under FAB

 

It seems that FAB replaces the marketplace, as Bridge is still working.   Will update as warranted.

# Section 4:38.	C++ Refresher
##	Classes and Inheritance

Classes have their own	
* Variables
* Functions

Each child class will inherit Variables & Functions from the parent class.
Each child class can have child variables & child functions.

Parent classes can mark their functions as virtual.  Child classes can override those functions, creating child versions of those functions.
Child classes can call their override functions, as well as the original parent functions.
A child class can inherit from multiple parents.

> A pointer is a variable designed to hold an object's address.

A variable of type pointer to parent is capable of storing the address of an object derived from the parent class.

UE has its own inheritance hierarchy.
* UObject
* AActor
* APawn
* ACharacter

> Everything that derives from UObject, that is not an actor, has U prefixed on it's class name.

> Everything derived from Actor has it's name prefixed with an A.

**UObject**
* Stores Data
* Cannot be placed in a level

**AActor**
* Can be placed in a level
* Can have visual representation

**APawn**
* Can be possessed by a controller

**ACharacter**
* Has a character movement component
* Has character-specific functionality

## "Is A" vs "Has A" Relationships

**Parent Class**
* a parent is not a child
* a parent is not a grandchild

**Child Class**
* a child is a parent
* a child is not a grandchild

**Grandchild Class**
* a grandchild is a child
* a grandchild is a parent

**UObject**
* a UObject is not an AActor
* a UObject is not an APawn

**AActor**
* an AActor is a UObject
* an AActor is not an APawn

**APawn**
* an APawn is an AActor
* an APawn is a UObject

# Section 4:39. Reflection and Garbage Collection.

## Reflection

> Reflection is the ability of a program to examine itself at runtime.

> A program will analyze what's happening, inside of itself, & harvest data about the program.

**Harvesting Data:**
* The Unreal Editor System
* Expose data to Blueprints
* Garbage Collection

> Garbage Collection is when a program manages memory associated with the project, & automatically deletes objects as soon as they are no longer being used.

UHT: Unreal Header Tool

# Section 5:42. Blueprint Creation

> Blueprint naming conventions start with BP_

# Section 6:55. Exposing Variables to Blueprint

**UPROPERTY Settings**
* EditDefaultsOnly restricts variables to the BP Event Graph only.
* EditInstanceOnly exposes the property to be changed on the instance (inside the Details pane).
* EditAnywhere allows changes on the default & instance.

