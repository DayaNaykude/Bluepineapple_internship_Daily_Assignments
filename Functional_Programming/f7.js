// --------- BOILERPLATE -----------------------------------------------------
const _l = (msg) => console.log("Output ==> [" + msg + "]");
// --------- BOILERPLATE -----------------------------------------------------

//print each element and the length of it's name - use map function
const materials = ["Hydrogen", "Helium", "Lithium", "Beryllium"];

const nameFormatter = (material) => {
    return "Name: " + material + ", Length: " + material.length;
} 


const outputArr = materials.map((material) => {
    //print one at a time
    return nameFormatter(material);  
  }
);

//_l(outputArr);

//_l(nameFormatter(materials[0]));

_l(outputArr.join('\n'));

_l(materials.map(name => name.length));

_l(materials.map(n => {return n;}));

