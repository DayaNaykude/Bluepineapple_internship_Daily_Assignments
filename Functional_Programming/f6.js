// --------- BOILERPLATE -----------------------------------------------------
const _l = (msg) => console.log("Output ==> [" + msg + "]");
// --------- BOILERPLATE -----------------------------------------------------

//returning functions

function sayHelloTo(name) {

  //returns a first class function (behaviour)
  //instead of a data value
  return function () {
    return "Hello, " + name;
  }; // <==== returns a function hardwired with the name


}

function invoker(/*function as param*/ f){
  return f();
}

let x_fn  = sayHelloTo('X'); //fn
let ret = invoker(x_fn);
_l(ret);




let sfn = sayHelloTo('Sanket');
_l(sfn);

_l(sfn());

function greeting(/*function*/helloName) {
  _l(helloName());
}

let helloA = sayHelloTo("A"); // hardwired A function
let helloB = sayHelloTo("B"); // hardwired B function

_l(   invoker(   helloA));
greeting(helloB);
greeting(sfn);

let tableFactory = function(i){
  return function(){
    let index = 1;
    let table = [];
    while (index<=10){
      table.push(index*i);
      index++;
    }
    return table;
  }
}

const tableOf2 = tableFactory(2);

console.log(tableOf2().join(' '));


const tableOf3 = tableFactory(3);
console.log(tableOf3().join(' '));
console.log(tableOf2().join(' '));
