//find a subtree of given root node

var data = [
  { depth: 0, id: "D35df12", value: "Cricket", parent_id: "" },
  { depth: 1, id: "D35gf42", value: "TEST", parent_id: "D35df12" },
  { depth: 1, id: "D35gf43", value: "ODI", parent_id: "D35df12" },
  { depth: 1, id: "D35gf44", value: "T-20", parent_id: "D35df12" },
  { depth: 2, id: "D35gf45", value: "Red Ball", parent_id: "D35gf42" },
  { depth: 2, id: "D35gf46", value: "Pink Ball", parent_id: "D35gf42" },
  { depth: 2, id: "D35gf47", value: "White Ball", parent_id: "D35gf43" },
  { depth: 2, id: "D35gf48", value: "White Ball", parent_id: "D35gf44" },
  { depth: 3, id: "D35gf49", value: "kookaburra", parent_id: "D35gf45" },
  { depth: 3, id: "D35gf50", value: "Dukes", parent_id: "D35gf45" },
];

var subTree = [];
var parentPushFlag = 0;
getSubtree = function (data, root) {
  var rootNode = {};

  data.forEach((element) => {
    if (element.id == root) {
      rootNode = element;
    }
  });

  if (parentPushFlag == 0 && Object.keys(rootNode).length != 0) {
    subTree.push(rootNode);
    parentPushFlag++;
  }
  childsOfRootNode = data.filter((child) => {
    return (
      child.depth === rootNode.depth + 1 && child.parent_id === rootNode.id
    );
  });

  if (childsOfRootNode.length == 0) {
    return;
  } else {
    childsOfRootNode.forEach((element) => subTree.push(element));
    childsOfRootNode.forEach((element) => getSubtree(data, element.id));
  }
};

getSubtree(data, "D35df12");

if (subTree.length != 0) {
  console.table(subTree);
} else {
  console.log("No subtree is present in the tree of this parent Id !");
}
