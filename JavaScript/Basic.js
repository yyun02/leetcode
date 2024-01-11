console.log ("hello world");

/* Data Types:
undefined (haven't set to anything), null (nothing), boolean (T/F), string, symbol, number, and object
*/

var myName = "Beau";

myName = 8;

let ourName = "freeCodeCamp";

const pi = 3.14;

//var - throughout program
//let - only within scope where declared
//const - constant, cannot be changed

var a; //declaring variable
console.log(a); //undefined
var b = 2; //declaring and assigning variable

a = 7; //assigning variable
b = a; //assigning variable

console.log(a); //allow us to see things in console

//Case sensitive

/*****
CODE OUTPUT
\' single quote
\" double quote
\\ backslash
\n newline
\r carriage return
\t tab
\b backspace
\f form feed
*****/

var myStr = "FirstLine\n\t\\SecondLine\nThirdLine";
console.log(myStr);

var firstNameLength = 0;
var firstName = "Ada";

firstNameLength = firstName.length;

console.log(firstNameLength);

//individual characters in string cannot be changed, but entire string can be changed

var myStr = "Jello World";

myStr[0] = "H"; //cannot do this
myStr = "Hello World";


function wordBlanks(myNoun, myAdjective, myVerb, myAdverb) {
    var result = "";
    result += "The " + myAdjective + " " + myNoun + " " + myVerb + " " + myAdverb;
    return result;
}

console.log(wordBlanks("dog", "big", "ran", "quickly"));


//Arrays
var ourArray = ["John", 23]; //can store different data types
//ourArray[0] = "John"
//ourArray[1] = 23

var myArray = ["Quincy", 1];

var ourArray = [["the universe", 42], ["everything", 101010]];
var myArray = [["Bulls", 23], ["White Sox", 45]];

var ourArray = [18, 64, 99];
ourArray[1] = 45; //ourArray now equals [18, 45, 99]

var ourArray = ['Stimpson', 'J', 'cat'];
ourArray.push(['happy', 'joy']); //ourArray now equals ['Stimpson', 'J', 'cat', ['happy', 'joy']]

var ourArray = [1, 2, 3];
var removedFromOurArray = ourArray.pop(); //ourArray now equals [1, 2]

var ourArray = ['Stimpson', 'J', ['cat']];
var removedFromOurArray = ourArray.shift(); 
//removedFromOurArray now equals 'Stimpson'
//ourArray now equals ['J', ['cat']]

var ourArray = ['Stimpson', 'J', 'cat'];
ourArray.shift(); //ourArray now equals ['J', 'cat']
ourArray.unshift('Happy'); //ourArray now equals ['Happy', 'J', 'cat']

var myGlobal = 10;

function fun1() {
    oopsGlobal = 5; //if used var, it would be local variable
                    //if not used var, it would be global variable
}

function fun2() {
    var output = "";
    if (typeof myGlobal != "undefined") {
        output += "myGlobal: " + myGlobal;
    }
    if (typeof oopsGlobal != "undefined") {
        output += " oopsGlobal: " + oopsGlobal;
    }
    console.log(output);
}

fun1();
fun2(); 

//Local Scope and Functions
function myLocalScope() {
    var myVar = 5;
    console.log(myVar);
}
myLocalScope();

console.log(myVar); //cannot access myVar outside of function

//Global vs Local Scope in Functions
var outerWear = "T-Shirt";

function myOutfit() {
    var outerWear = "sweater";
    return outerWear;
}

console.log(myOutfit()); //sweater
console.log(outerWear); //T-Shirt

//Return a Value from a Function with Return
function minusSeven(num) {
    return num - 7;
}   

console.log(minusSeven(10)); //3

//Undifined Value returned from a Function
var sum = 0;
function addThree() {
    sum = sum + 3;
}
function addFive() {
    sum += 5;
}

console.log(addThree()); //undefined

//Assignment with a Returned Value

var changed = 0;

function change(num) {
    return (num + 5) / 3;
}

changed = change(10);

//Stand in Line
function nextInLine(arr, item) {
    arr.push(item);
    return arr.shift();
}

var testArr = [1,2,3,4,5];

console.log("Before: " + JSON.stringify(testArr)); //JSON.stringify converts array into string
console.log(nextInLine(testArr, 6));
console.log("After: " + JSON.stringify(testArr));
//Before: [1,2,3,4,5]
//1
//After: [2,3,4,5,6]

//Boolean Values
3 === 3 //true
3 === '3' //false

3 == 3 //true
3 == '3' //true

//Strict Ineuality Operator

function testStrict(val) {
    if (val !== 17) {
        return "Not Equal";
    }
    return "Equal";
}

//Switch Statements
function caseInSwitch(val) {
    var answer = "";
    switch(val) { // uses strict equality ===
        case 1:
            answer = "alpha";
            break; //breaks out of switch statement
        case 2:
            answer = "beta";
            break;
        case 3:
            answer = "gamma";
            break;
        case 4:
            answer = "delta";
            break;
        default: //default case
            answer = "stuff";
            break;
    }
    return answer;
}

console.log(caseInSwitch(1)); //alpha
console.log(caseInSwitch("a")); //stuff

//Multiple Identical Options in Switch Statements
function sequentialSizes(val) {
    var answer = "";
    switch(val) {
        case 1:
        case 2:
        case 3:
            answer = "Low";
            break;
        case 4:
        case 5:
        case 6:
            answer = "Mid";
            break;
        case 7:
        case 8:
        case 9:
            answer = "High";
    }
    return answer;
}

//Return Early Pattern for Functions
function abTest(a, b) {
    if (a < 0 || b < 0) {
        return undefined;
    }
    return Math.round(Math.pow(Math.sqrt(a) + Math.sqrt(b), 2));
}

//Math.round() rounds to nearest integer
//Marh.floor() rounds down to nearest integer
//Math.ceil() rounds up to nearest integer

//Counting Cards
var count = 0;

function cc(card) {     
    switch(card) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            count++; //count = count + 1
            break;
        case 10:
        case "J":
        case "Q":
        case "K":
        case "A":
            count--; //count = count - 1
            break;
    }
    var holdbet = 'Hold';
    if (count > 0) {
        holdbet = 'Bet';
    }
    return count + " " + holdbet;
}

cc(2); cc(3); cc(7); cc('K'); cc('A');
console.log(cc(4)); //5 Bet

//Build JavaScript Objects
var ourDog = {
    "name": "Camper",
    "legs": 4,
    "tails": 1,
    "friends": ["everything!"]
};

//Accessing Object Properties with Dot Notation
var testObj = {
    "hat": "ballcap",
    "shirt": "jersey",
    "shoes": "cleats"
};

var hatValue = testObj.hat; //ballcap
var shirtValue = testObj.shirt; //jersey

var hatValue = testObj["hat"]; //ballcap
var shirtValue = testObj["shirt"]; //jersey

//Accessing Object Properties with Variables
var testObj = {
    12: "Namath",
    16: "Montana",
    19: "Unitas"
};

var playerNumber = 16;
var player = testObj[playerNumber]; //Montana

//Updating Object Properties
var ourDog = {
    "name": "Camper",
    "legs": 4,
    "tails": 1,
    "friends": ["everything!"]
};

ourDog.name = "Happy Camper"; //dot notation
ourDog["name"] = "Happy Camper"; //bracket notation

//Add New Properties to a JavaScript Object
ourDog.bark = "bow-wow";

//Delete Properties from a JavaScript Object
delete ourDog.bark;

//Using Objects for Lookups
function phoneticLookup(val) {
    var result = "";

    //instead of switch statement, use object
    var lookup = {
        "alpha": "Adams",
        "bravo": "Boston",
        "charlie": "Chicago",
        "delta": "Denver",
        "echo": "Easy",
        "foxtrot": "Frank"
    };
    result = lookup[val];
    return result;
}

//Testing Objects for Properties
var myObj = {
    gift: "pony",
    pet: "kitten",
    bed: "sleigh"
};

function checkObj(checkProp) {

    //hasOwnProperty() if property exists in object
    if(myObj.hasOwnProperty(checkProp)) { 
        return myObj[checkProp];
    } else {
        return "Not Found";
    }
}

console.log(checkObj("gift")); //pony
console.log(checkObj("hello")); //Not Found

//Manipulating Complex Objects
var ourMusic = [ //array of objects
    {
        "artist": "Daft Punk",
        "title": "Homework",
        "release_year": 1997,
        "formats": [
            "CD",
            "Cassette",
            "LP"
        ],
        "gold": true
    },

    {
        "artist": "Beau Carnes",
        "title": "Cereal Man",
        "release_year": 2003,
        "formats": [
            "Youtube video"
        ]
    }
];

//Accessing Nested Objects
var myStorage = {
    "car": {
        "inside": {
            "glove box": "maps",
            "passenger seat": "crumbs"
        },

        "outside": {
            "trunk": "jack"
        }
    }
};

var gloveBoxContents = myStorage.car.inside["glove box"]; //maps

//Accessing Nested Arrays
var myPlants = [
    {
        type: "flowers",
        list: [
            "rose",
            "tulip",
            "dandelion"
        ]
    },

    {
        type: "trees",
        list: [
            "fir",
            "pine",
            "birch"
        ]
    }
];

var secondTree = myPlants[1].list[1]; //pine

//Record Collection
var collection = {
    "2548": {
        "album": "Slippery When Wet",
        "artist": "Bon Jovi",
        "tracks": [
            "Let It Rock",
            "You Give Love a Bad Name"
        ]
    },

    "2468": {
        "album": "1999",
        "artist": "Prince",
        "tracks": [
            "1999",
            "Little Red Corvette"
        ]
    },

    "1245": {
        "artist": "Robert Palmer",
        "tracks": []
    },

    "5439": {
        "album": "ABBA Gold"
    }
};
//Keep a copy of the collection for tests
var collectionCopy = JSON.parse(JSON.stringify(collection));
//JSON.stringify converts object into string
//JSON.parse converts string into object

function updateRecords(id, prop, value) {
    if (value === "") { //if value is empty, delete property
        delete collection[id][prop];
    } else if (prop === "tracks") {
        collection[id][prop] = collection[id][prop] || []; 
        //if collection[id][prop] is undefined, then create empty array

        collection[id][prop].push(value);
    } else {
        collection[id][prop] = value;
    }
    return collection;
}

updateRecords(5439, "artist", "ABBA"); //artist property updated to ABBA
updateRecords(5439, "tracks", "Take a Chance on Me"); //tracks property updated with new string

//Iterate with JavaScript While Loops
var myArray = [];
var i = 0;
while(i < 5) {
    myArray.push(i);
    i++;
}
console.log(myArray); //[0,1,2,3,4]

//Iterate with JavaScript For Loops
var ourArray = [];
for (var i = 0; i < 5; i++) {
    ourArray.push(i);
}
console.log(ourArray); //[0,1,2,3,4]

//Do...While Loops
var myArray = [];
var i = 10;
do {
    myArray.push(i);
    i++;
}
while (i < 5);

console.log(i, myArray); //11 [10]

//Profile Lookup
var contacts = [
    {
        "firstName": "Akira",
        "lastName": "Laine",
        "number": "0543236543",
        "likes": ["Pizza", "Coding", "Brownie Points"]
    },

    {
        "firstName": "Harry",
        "lastName": "Potter",
        "number": "0994372684",
        "likes": ["Hogwarts", "Magic", "Hagrid"]
    },

    {
        "firstName": "Sherlock",
        "lastName": "Holmes",
        "number": "0487345643",
        "likes": ["Intriguing Cases", "Violin"]
    },

    {
        "firstName": "Kristian",
        "lastName": "Vos",
        "number": "unknown",
        "likes": ["JavaScript", "Gaming", "Foxes"]
    }
];

function lookUpProfile(name, prop) {
    for(var i = 0; i < contacts.length; i++) {
        if(contacts[i].firstName === name) {
            return contacts[i][prop] || "No such property";
        }
    }
    return "No such contact";
}

var data = lookUpProfile("Akira", "likes"); //["Pizza", "Coding", "Brownie Points"]

//Generate Random Fractions with JavaScript
function randomFraction() {
    return Math.random();
    //returns random decimal between 0 (inclusive) and 1 (exclusive)
    //0 <= Math.random() < 1
}

console.log(randomFraction());

//Generate Random Whole Numbers with JavaScript
var randomNumberBetween0and19 = Math.floor(Math.random() * 20); //random number between 0 and 19
//Math.floor() rounds down to nearest whole number

function randomWholeNum() {
    return Math.floor(Math.random() * 10);
    //random number between 0 and 9
}

//Generate Random Whole Numbers within a Range
function randomRange(myMin, myMax) {
    return Math.floor(Math.random() * (myMax - myMin + 1)) + myMin;
    //random number between myMin and myMax inclusive
}

var myRandom = randomRange(5, 15);
console.log(myRandom); //random number between 5 and 15 inclusive

//Use the parseInt Function
function convertToInteger(str) {
    return parseInt(str);
    //parseInt() converts string to integer
}
console.log(convertToInteger("56")); //56

//Use the parseInt Function with a Radix
function convertToInteger(str) {
    return parseInt(str, 2);
    //second argument is radix, which specifies base of number in string
    //base 2 is binary
}
console.log(convertToInteger("10011")); //19

//Use the Conditional (Ternary) Operator
function checkEqual(a, b) {
    return a === b ? true : false;
    //condition ? statement-if-true : statement-if-false;
}

//Use Multiple Conditional (Ternary) Operators
function checkSign(num) {
    return num > 0 ? "positive" : num < 0 ? "negative" : "zero";
    //true - positive
    //false - num < 0
}

//Difference Between the var and let Keywords
var catName = "Quincy";
var quote;

var catName = "Beau";

function catTalk() {
    "use strict"; //catch common coding mistakes and unsafe actions
    catName = "Oliver";
    quote = catName + " says Meow!";
}

//----------------------------------------------------------------------------------------

let catName = "Quincy";
let quote;

let catName = "Beau";

function catTalk() {
    "use strict"; //catch common coding mistakes and unsafe actions
    catName = "Oliver";
    quote = catName + " says Meow!";
}
//let does not allow you to declare a variable more than once
//normally use let instead of var

//var is declared globally or locally if declared inside a function
//let is only declared locally if declared inside a block

function checkScope() {
    "use strict";
    let i = "function scope";
    if (true) {
        let i = "block scope";
        console.log("Block scope i is: ", i);
    }
    console.log("Function scope i is: ", i);
    return i;
}
console.log(checkScope()); 
//Block scope i is: block scope
//Function scope i is: function scope

function checkScope() {
    "use strict";
    var i = "function scope";
    if (true) {
        i = "block scope";
        console.log("Block scope i is: ", i);
    }
    console.log("Function scope i is: ", i);
    return i;
}
console.log(checkScope());
//Block scope i is: block scope
//Function scope i is: block scope

function checkScope() {
    "use strict";
    if (true) {
        var i = "block scope";
        console.log("Block scope i is: ", i);
    }
    console.log("Function scope i is: ", i);
    return i;
}
console.log(checkScope());
//Block scope i is: block scope
//Function scope i is: block scope

function checkScope() {
    "use strict";
    if (true) {
        let i = "block scope";
        console.log("Block scope i is: ", i);
    }
    console.log("Function scope i is: ", i);
    return i;
}
console.log(checkScope());
//Error: i is not defined

//Declare a Read-Only Variable with the const Keyword
function printManyTimes(str) {
    "use strict";

    const SENTENCE = str + " is cool!"; //use all CAPs for const variables
    SENTENCE = str + " is amazing!"; //error - cannot change value of constant variable
    
    for (let i = 0; i < str.length; i+=2) {
        console.log(SENTENCE);
    }
}

const s = [5, 7, 2];
function editInPlace() {
    "use strict";

    s = [2, 5, 7]; //error - cannot change value of constant variable
    s[0] = 2; //allowed
    s[1] = 5;
    s[2] = 7;
}
editInPlace();

//Prevent Object Mutation
function freezeObj() {
    "use strict";
    const MATH_CONSTANTS = {
        PI: 3.14
    };

    Object.freeze(MATH_CONSTANTS); //prevents object mutation
    try { //code that may throw error
        MATH_CONSTANTS.PI = 99;
    } catch( ex ) { //code to handle error
        console.log(ex);
    }
    return MATH_CONSTANTS.PI;
}

const PI = freezeObj();

//Use Arrow Functions to Write Concise Anonymous Functions
var magic = function() {
    return new Date();
};

//same as
const magic = () => new Date();

//Arrow functions with parameters
var myConcat = function(arr1, arr2) {
    return arr1.concat(arr2);
};

//same as
const myConcat = (arr1, arr2) => arr1.concat(arr2);

console.log(myConcat([1,2], [3,4,5])); //[1,2,3,4,5]

//Higher Order Arrow Functions
const realNumberArray = [4, 5.6, -9.8, 3.14, 42, 6, 8.34, -2];

const squareList = (arr) => { //squareList is higher order function
    const squaredIntegers = arr.filter(num => Number.isInteger(num) && num > 0).map(x => x * x);
    //filter() returns new array with elements that pass condition
    //map() returns new array with each element modified according to condition
    //Number.isInteger(num) AND num > 0
    return squaredIntegers;
}

const squaredIntegers = squareList(realNumberArray);
console.log(squaredIntegers); //[16, 1764, 36]

//Default Parameters for Functions
const increment = (function() {
    return function increment(number, value = 1) { //value = 1 is default parameter
        return number + value;
    };
})();

console.log(increment(5, 2)); //7
console.log(increment(5)); //6

//Rest Operator with Function Parameters
const sum = (function() {
    return function sum(x, y, z) {
        const args = [x, y, z]; //args is array
        return args.reduce((a, b) => a + b, 0);
    }
})();

const sum = (function() {
    return function sum(...args) { //...args is rest operator
        return args.reduce((a, b) => a + b, 0);
    };
})();

console.log(sum(1, 2, 3, 4)); //10

//Spread Operator to Evaluate Arrays In-Place
const arr1 = ['JAN', 'FEB', 'MAR', 'APR', 'MAY'];
let arr2;
(function() {
    arr2 = [...arr1]; //spread operator
    arr1[0] = 'potato'
})();
console.log(arr2); //['JAN', 'FEB', 'MAR', 'APR', 'MAY']

(function() {
    arr2 = arr1; //spread operator
    arr1[0] = 'potato'
})();
console.log(arr2); //['potato', 'FEB', 'MAR', 'APR', 'MAY']

//Destructuring Assignment to Assign Variables from Objects
var voxel = {x: 3.6, y: 7.4, z: 6.54};

var x = voxel.x; //x = 3.6
var y = voxel.y; //y = 7.4
var z = voxel.z; //z = 6.54

const { x : a, y : b, z : c } = voxel; //a = 3.6, b = 7.4, c = 6.54
//get x, y, z from voxel and assign to a, b, c

const AVG_TEMPERATURES = {
    today: 77.5,
    tomorrow: 79
};

function getTempOfTmrw(avgTemperatures) {
    "use strict";

    const { tomorrow : tempOfTomorrow } = avgTemperatures;
    // tomorrow from avgTemperatures is assigned to tempOfTomorrow
    return tempOfTomorrow;
}

console.log(getTempOfTmrw(AVG_TEMPERATURES)); //79

//Destructuring Assignment to Assign Variables from Nested Objects
const LOCAL_FORECAST = {
    today: { min: 72, max: 83 },
    tomorrow: { min: 73.3, max: 84.6 }
};

function getMaxOfTmrw(forecast) {
    "use strict";

    const { tomorrow : { max : maxOfTomorrow }} = forecast;
    //max from tomorrow from forecast is assigned to maxOfTomorrow
    return maxOfTomorrow;
}

console.log(getMaxOfTmrw(LOCAL_FORECAST)); //84.6

//Destructuring Assignment to Assign Variables from Arrays
const [z, x, , y] = [1, 2, 3, 4, 5, 6];
//z = 1, x = 2, y = 4

let a = 8, b = 6;
(() => {
    "use strict";
    [a, b] = [b, a];
})();
console.log(a); //6
console.log(b); //8

//Destructuring Assignment with the Rest Operator to Reassign Array Elements
const source = [1,2,3,4,5,6,7,8,9,10];
function removeFirstTwo(list) {
    const [ , , ...arr] = list; //...arr is rest operator
    //do nothing for the first two elements
    //get list, rest is assigned to arr
    return arr;
}
const arr = removeFirstTwo(source);
console.log(arr); //[3,4,5,6,7,8,9,10]
console.log(source); //[1,2,3,4,5,6,7,8,9,10]

//Destructuring Assignment to Pass an Object as a Function's Parameters
const stats = {
    max: 56.78,
    standard_deviation: 4.34,
    median: 34.54,
    mode: 23.87,
    min: -0.75,
    average: 35.85
};

const half = (function() {

    return function half(stats) {
        return (stats.max + stats.min) / 2.0;
    };

    //instead of passing the entire stats object, pass only required fields

    return function half({ max, min }) { //max, min from stats object passed in
        return (max + min) / 2.0;
    };
})();

console.log(stats); //{max: 56.78, standard_deviation: 4.34, median: 34.54, mode: 23.87, min: -0.75, average: 35.85}
console.log(half(stats)); //28.015

//Create Strings using Template Literals
const person = {
    name: "Zodiac Hasbro",
    age: 56
};

const greeting = `Hello, my name is ${person.name}! 
I am ${person.age} years old.`;
//${} is for variables
console.log(greeting); //Hello, my name is Zodiac Hasbro!
                      //I am 56 years old.

const result = {
    success: ["max-length", "no-amd", "prefer-arrow-functions"],
    failure: ["no-var", "var-on-top", "linebreak"],
    skipped: ["id-blacklist", "no-dup-keys"]
};

function makeList(arr){
    const resultDisplayArray = [];
    for (let i = 0; i < arr.length; i++) {
        resultDisplayArray.push(`<li class="text-warning">${arr[i]}</li>`);
    }
}

const resultDisplayArray = makeList(result.failure);

//Simple Fields
const createPerson = (name, age, gender) => {

    return {
        name: name,
        age: age,
        gender: gender
    };
};

//same as

const createPerson = (name, age, gender) => ({name, age, gender});

console.log(createPerson("Zodiac Hasbro", 56, "male"));

//Concise Declarative Functions
const bicycle = {
    gear: 2,
    setGear: function(newGear) {
        "use strict";
        this.gear = newGear;
    }
};

//same as

const bicycle = {
    gear: 2,
    setGear(newGear) {
        "use strict";
        this.gear = newGear;
    }
};

bicycle.setGear(3);
console.log(bicycle.gear); //3

//class syntax to define a constructor function
var SpaceShuttle = function(targetPlanet) {
    this.targetPlanet = targetPlanet;
}

//same as

class SpaceShuttle {
    constructor(targetPlanet) {
        this.targetPlanet = targetPlanet;
    }
}

var zeus = new SpaceShuttle('Jupiter');
console.log(zeus.targetPlanet); //Jupiter

//getter and setter functions
class Book {
    constructor(author) {
        this._author = author;
    }

    get writer() {
        return this._author;
    }

    set writer(updatedAuthor) {
        this._author = updatedAuthor;
    }
}

function makeClass() {
    class Thermostat {
        constructor(temp) {
            this._temp = 5/9 * (temp - 32); // starting with _ for private variable
        }

        get temperature() {
            return this._temp;
        }

        set temperature(updatedTemp) {
            this._temp = updatedTemp;
        }
    }
    return Thermostat;
}

const Thermostat = makeClass();
const thermos = new Thermostat(76); //Fahrenheit passed in for constructor
let temp = thermos.temperature; //24.44 Celsius - getter function
thermos.temperature = 26; //setter function
temp = thermos.temperature; //26 Celsius


//Import and Export

export const capitalizeString = (string) => string.toUpperCase();
//export function from another file
import { capitalizeString } from "./test";
//import function from another file

const cap = capitalizeString("hello!");

console.log(cap); //Hello!