// --------- BOILERPLATE -----------------------------------------------------
const _l = (msg) => console.log("Output ==> [" + msg + "]");
// --------- BOILERPLATE -----------------------------------------------------

const foo = function () {
  _l("foobar");
};

const bar = foo;
// Invoke it using the variable
foo();

bar();
