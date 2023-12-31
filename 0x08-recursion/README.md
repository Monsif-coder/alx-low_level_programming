Recursion
Recursion means "defining a problem in terms of itself". This can be a very powerful tool in writing algorithms. Recursion comes directly from Mathematics, where there are many examples of expressions written in terms of themselves. For example, the Fibonacci sequence is defined as: F(i) = F(i-1) + F(i-2)

Recursion
Recursion is the process of defining a problem (or the solution to a problem) in terms of (a simpler version of) itself.

For example, we can define the operation "find your way home" as:

If you are at home, stop moving.

Take one step toward home.

"find your way home".

Here the solution to finding your way home is two steps (three steps). First, we don't go home if we are already home. Secondly, we do a very simple action that makes our situation simpler to solve. Finally, we redo the entire algorithm.

The above example is called tail recursion. This is where the very last statement is calling the recursive algorithm. Tail recursion can directly be translated into loops.

How would you write a recursive "algorithm" for finding Temple Square?

Answer:
Another example of recursion would be finding the maximum value in a list of numbers. The maximum value in a list is either the first number or the biggest of the remaining numbers. Here is how we would write the pseudocode of the algorithm:

        
          Function find_max( list )

            possible_max_1 = first value in list
            possible_max_2 = find_max ( rest of the list );
            
            if ( possible_max_1 > possible_max_2 )
              answer is possible_max_1
            else
              answer is possible_max_2
            end

          end
        
      
Parts of a Recursive Algorithm
All recursive algorithms must have the following:

Base Case (i.e., when to stop)

Work toward Base Case

Recursive Call (i.e., call ourselves)

The "work toward base case" is where we make the problem simpler (e.g., divide list into two parts, each smaller than the original). The recursive call, is where we use the same algorithm to solve a simpler version of the problem. The base case is the solution to the "simplest" possible problem (For example, the base case in the problem 'find the largest number in a list' would be if the list had only one number... and by definition if there is only one number, it is the largest).

Simple Example: Add three numbers
Adding three numbers is equivalent to adding the first two numbers, and then adding these two numbers again.

(Note, in Matlab, a function can be called without all the arguments. The nargin function tells the computer how many values were specified. Thus add_numbers(1) would have an nargin of 1; add_numbers(1,1) would have an nargin of 2; add_numbers(1,1,1) would have an nargin of 3.)

Matlab
            
        function result = add_numbers(a, b, c)

          if      ( nargin() == 2 )
            result = a + b;
          else if ( nargin() == 3 )
            result = add_numbers(a+b, c);
          else
            error('oops');
          end
          
        end
            
          
Identify the 3 parts of the recursive algorithm:
All recursive algorithm must have the following three stages:

Base Case: if ( nargin() == 2 ) result = a + b;

"Work toward base case": a+b becomes the first parameter

This reduces the number of parameters (nargin) sent in to the function from 3 to 2, and 2 is the base case!

Recursive Call: add_numbers(a+b, c);

Why Recursion Works
In a recursive algorithm, the computer "remembers" every previous state of the problem. This information is "held" by the computer on the "activation stack" (i.e., inside of each functions workspace).

Every function has its own workspace PER CALL of the function.

Maze Example:
Consider a rectangle grid of rooms, where each room may or may not have doors on the North, South, East, and West sides.

How do you find your way out of a maze? Here is one possible "algorithm" for finding the answer:

For every door in the current room, if the door leads to the exit, take that door.

The "trick" here is of course, how do we know if the door leads to a room that leads to the exit? The answer is we don't but we can let the computer figure it out for us.

What is the recursive part about the above algorithm? Its the "door leads out of the maze". How do we know if a door leads out of the maze? We know because inside the next room (going through the door), we ask the same question, how do we get out of the maze?

What happens is the computer "remembers" all the "what ifs". What if I take the first door, what if I take the second door, what if I take the next door, etc. And for every possible door you can move through, the computer remembers those what ifs, and for every door after that, and after that, etc, until the end is found.

Here is a close to actual code implementation.

Matlab
            
        % return true if we can find our way out
        function success = find_way_out( maze, room )
        
          for every door in the room

             new_room = go_through_door( maze, door )

             if  ( find_way_out ( maze, new_room ) )
               take that door.

               return true
             end

          end

          % there were no ways out :(
          return false

        end
            
          
Question: What is the base case above?

Answer: (That was a trick question) There is no base case in the code. You need to check at the start if the room is the exit. If it is, no recursion!

        

        function success = find_way_out( maze, room )

           if room is exit → return true

           room ← mark as visited

           % rest of code
           ...
      
        end
        
      
Question: How do you mark the room as visited?

Answer: There are various techniques. If the room is a structure (or object) you can add the visited field direction to the room. (e.g., room.visited = true;) If you are not using objects, you could have a matrix of boolean flags that is the same size/shape as the maze and use these values.

Question: Are the other problems with the above algorithm?

Answer: The answer to that can be found by thinking about the following question: What would happen if the maze was a giant grid of identically sized rectangular rooms, each with doors on every wall? Imagine you go North through the first door, then East through the next rooms door, then South through that rooms door, and then West through that rooms door. Where do you end up? Back where you started! Worse, you might continue to make this loop for ever. How would a intrepid adventurer solve this problem?

One answer to that is by using a piece of chalk and putting a big X on the floor of every room you enter. Thus when you come back to a room with an X on the floor, you know you needn't enter. In the case of the program, a boolean flag "seen" or "visited" should be used. Every room has a flag. Every room starts with the flag being set to false. When you visit a room, you set the flag to true. Finally, in the "base case" you have a line such as:

        

        function success = find_way_out( maze, room )

           % exit chack

           if room is visited → return false

           % rest of code
           ...
      
        end
        
      
