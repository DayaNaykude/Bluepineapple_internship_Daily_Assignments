// --------- BOILERPLATE -----------------------------------------------------
const _lokvs = (os) =>
  os.forEach((o) => {
    process.stdout.write("[\n");
    Object.keys(o).forEach((k) =>
      process.stdout.write("\t" + k + ":" + o[k] + "\n")
    );
    process.stdout.write("]\n");
  });

//decorate string with a reverse function
String.prototype.reverse = function (str) {
  str = str ?? this;
  return str.split("").reverse().join("");
};
// --------- BOILERPLATE -----------------------------------------------------

//Traditional way - create objects and add attributes to them
const strings = ["alpha", "beta", "gamma", "delta", "epsilon"];
const result = [];
for (let i = 0; i < strings.length; i++) {
  let cap = strings[i].toUpperCase();
  let item = { name: cap }; //JSON object to hold my return value block
  item["length"] = cap.length;
  item["rev"] = cap.reverse();
  result.push(item);
}

//print result
_lokvs(result);

