# Making-Things-Interactive-01
Mechanized Ink Painting 

  For this project, I was interested in representing the progression of the human experience withn a mechanical machine. I began with a common children's toy, a paint spinner, and sought to represent its evolution into "adulthood"; i.e. into a mechanical form.

  One of my main inspirations for this project was Damien Hirst, an artist who uses paint spinning as a medium for his work. I wanted to capture the same playfullness and aesthetic of his work. However, I wanted to question the interaction and control of the art. In classical painting, the boundaries of control of the artist are between the artist's hand and the paintbrush. With this project, I wanted to question the nature of the paintbrush, of the artist's "tool". My claim is that the essence of an artist's tool is a sensor, an interpreter of the artist's intent. Here, the interpreter, or sensor, or artist's tool is the potentiometer and touch sensor. 

Construction Process: 

For this project, I developed a file to lasercut the frame of the ink painting machine. Below is an image of how I organized and developed the file. The dxf file can be found under "lasercut files"/ 

![lasercut process image](https://github.com/camibaumann/Making-Things-Interactive-01/blob/master/lasercut%20files/02_11_17%20cut%20file.jpg)

With this, I was able to depend on a solid framework in order to build my prototype. 

After having cut out my prototype's frame, I could start building it. First I positioned the Arduino Uno, my breadboard, and power supply. 

![First process Image](https://github.com/camibaumann/Making-Things-Interactive-01/blob/master/progress%20images/IMG_20170212_113112.jpg)

I then wired and tested my potentiometer. 

![Second process image](https://github.com/camibaumann/Making-Things-Interactive-01/blob/master/progress%20images/IMG_20170212_113833.jpg)

I based and altered my wiring layout based on the circuit diagram found on p147 of "The Arduino Projects Book". 

![potentiometer wiring](https://github.com/camibaumann/Making-Things-Interactive-01/blob/master/reference%20images/potentiometer%20circuit.jpg)

I then wired and tested the DC motor for my project. Thus finishing the wiring for the bottom components of my prototype. 

![3rd process image](https://github.com/camibaumann/Making-Things-Interactive-01/blob/master/progress%20images/IMG_20170212_115135.jpg)

I based the wiring for the portion of my project on the circuit diagram found on p96 of "The Arduino Projects Book". 

![dc motor wiring](https://github.com/camibaumann/Making-Things-Interactive-01/blob/master/reference%20images/dc%20motor%20circuit.jpg)

Having tested the potentiometer and the dc motor, I then tested two touch sensors powered by an externl power source. 

![touch sensor wiring](https://github.com/camibaumann/Making-Things-Interactive-01/blob/master/progress%20images/IMG_20170212_161159.jpg)

I then wired the solenoid valves to the prototype and connected them to the touch sensors. As such, the solenoid valves were wired and programmed to release ink onto a canvas when the sensors were touched. 

![solenoid valve wiring](https://github.com/camibaumann/Making-Things-Interactive-01/blob/master/progress%20images/IMG_20170212_175219.jpg)

As a reference, I have included a wiring diagram that I created using Fritzing which depicts how to wire the touch sensor with a solenoid valve. 

![touch senor to valve](https://github.com/camibaumann/Making-Things-Interactive-01/blob/master/circuit%20diagram/touch%20sensor%20to%20valve.JPG)

Final Product: 

![Process Gif](https://github.com/camibaumann/Making-Things-Interactive-01/blob/master/gif/Process-Images-GIF.gif?raw=true)

I have created a video demonstrated the final machine in action and have included the Youtube link below: 

https://www.youtube.com/watch?v=zS0b-3Y6ktA

