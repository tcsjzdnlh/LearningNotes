
--- Qt Animation Framework ----------------
		By animating Qt properties, the framework provides great freedom for animating widgets and other QObjects. 
		The framework can also be used with the Graphics View framework
		
		
		Behind the scenes, the animations are controlled by a global timer, 
		which sends updates to all animations that are playing.
		
		
		A major reason we chose to animate Qt properties 
		is that it presents us with freedom 
		to animate already existing classes in the Qt API.
		
		
		You also have the possibility to animate values of a QObject that is not declared as a Qt property. 
		The only requirement is that this value has a setter. 
		You can then subclass the class containing the value and declare a property that uses this setter. 
		Note that each Qt property requires a getter, 
		so you will need to provide a getter yourself if this is not defined.
		
		
		When you want to animate QGraphicsItems, 
		you also use QPropertyAnimation. However, 
		QGraphicsItem does not inherit QObject. 
		A good solution is to subclass the graphics item you wish to animate. T
		his class will then also inherit QObject. 
		
		
		
		
		 Easing curves describe a function 
		 that controls how the speed of the interpolation between 0 and 1 should be, 
		 and are useful if you want to control the speed of an animation 
		 without changing the path of the interpolation.
		
		
		The QAnimationGroup is an example of an animation that does not animate properties
		
		
		Since an animation group is an animation itself, you can add it to another group.
		
		
		We also have the possibility to associate properties with the states 
		rather than setting the start and end values ourselves.
		
		
--- The State Machine FrameWork -------------------------------
		

		
		A Simple State Machine
		Doing Useful Work on State Entry and Exit
		State Machines That Finish
		Sharing Transitions By Grouping States
		Using History States to Save and Restore the Current State
		Using Parallel States to Avoid a Combinatorial Explosion of States
		Detecting that a Composite State has Finished
		Targetless Transitions
		Events, Transitions and Guards
		Using Restore Policy To Automatically Restore Properties
		Animating Property Assignments
		Detecting That All Properties Have Been Set In A State
		What Happens If A State Is Exited Before The Animation Has Finished
		Default Animations
		Nesting State Machines
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		Statecharts provide a graphical way of modeling how a system reacts to stimuli. 
		This is done by defining the possible states that the system can be in, 
		and how the system can move from one state to another (transitions between states). 
		A key characteristic of event-driven systems (such as Qt applications) is that 
		behavior often depends not only on the last or current event, but also the events that preceded it. 
		With statecharts, this information is easy to express.
		
		
		
		Qt's event system is used to drive the state machines.
		
		The state machine executes asynchronously, i.e. it becomes part of your application's event loop.
		
		
		
		The QState::assignProperty() function 
		can be used to have a state set a property of a QObject when the state is entered
		
		
		Child states implicitly inherit the transitions of their parent state
		
		
		A child state can override an inherited transition.
		
		A history state (QHistoryState object) is a pseudo-state 
		that represents the child state ( that the parent state was )   ----in the last time the parent state was exited.
		
		
		
		
		you can add animations to transitions to make sure property assignments in the target state are animated. 
		If you want a specific animation to be used for a given property regardless of which transition is taken, 
		you can add it as a default animation to the state machine. 
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	They(Control element) differ from primitive elements in that they are not passive, but fill a function in the interaction with the user	
	

	Note that sub controls are not the same as the control elements described in the previous section
	It is common, though, that complex elements use control and primitive elements to draw their sub controls
	

	Pixel metrics, which are style-dependent sizes in screen pixels, are also used for measurements when drawing
	 A pixel metric is a style dependent size represented by a single pixel value
		
		
		
		
		
		
		
		
		
		
		
		