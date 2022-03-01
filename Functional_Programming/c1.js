  //Currying

//26 Dec 2021 10:55:25:1214Z : DEBUG : this is a debug message

const log = (date, importance, message) =>
    console.log(`[${date.getHours()}:${date.getMinutes()}] [${importance}] ${message}`);

const trace = label => value => {
    console.log(`${ label }: ${ value }`);
    return value;
  };

const curry = (func) => {
    return function curried(...args) {
      if (args.length >= func.length) {
        return func.apply(this, args);
      } else {
        return function(...args2) {
          return curried.apply(this, args.concat(args2));
        }
      }
    };
}

let curriedlog = curry(log);
let l_date = log1(new Date()); //curried with first param = date
let l_info = l_date('INFO'); //curried with second param as well
let l_debug = l_date('DEBUG'); // ..

l_info('Some Info Message'); //actual invocation
l_debug('Some Debug Message');