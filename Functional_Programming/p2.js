// --------- BOILERPLATE -----------------------------------------------------
const _lokvs = (os) => os.forEach( o => {
    process.stdout.write('[\n');
    Object.keys(o).forEach( k => process.stdout.write('\t' + k + ':' + o[k] + '\n'));
    process.stdout.write(']\n');
});

const _l = console.log;

//decorate string with a reverse function
String.prototype.reverse = function(str){
    str = str ?? this;
    return str.split('').reverse().join(''); 
}

//generic pipeline function
//The items from the data array are passed, one at a time to the first transform 
//The output of the first transform is passed, one item at a time to the second transform function. 
//And so forth...
const pipe_em = (...fns) => (data) => {
        return fns.reduce( (a, fn) => {return fn(a);}, 
                            data);
};

// --------- BOILERPLATE -----------------------------------------------------

//transforms - to be chained
const wrap_capital = (str) => { return { orig: str ?? this };}
const add_attr_caps = (item) => Object.assign (item, {caps: item.orig.toUpperCase()});
const add_attr_length = (item) => Object.assign (item, {length: item.caps.length});
const add_attr_reverse = (item) => Object.assign(item, {rev: item.caps.reverse()});
const add_attr_startsVowel = (item) => Object.assign(item, {startsV: ["A","E","I","O","U"].includes(item.caps.charAt(0))});

//Functional way
const strings = ['alpha', 'beta', 'gamma', 'delta', 'epsilon'];

const results = strings.map(str => pipe_em(
    wrap_capital,
    add_attr_caps,
    add_attr_length,
    add_attr_reverse,
    add_attr_startsVowel
    //... add chained functions as required..
)(str));
//print result
_l(results); 