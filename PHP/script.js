let haystack = [1, 5, 6, 9, 15, 20, 23, 27, 30, 31, 40];
console.log(haystack);
let needle = 20;
let isIN = false;
let left = 0;
let right = haystack.length - 1;
let middle = Math.floor ((left + right) / 2);
while(left < right){
    console.log(left,right,middle);
 if (needle == haystack ==[middle]){
     isIN = true;
     break;
 }else if (needle < haystack[middle]){
     left = middle + 1;
 }else {
     right = middle - 1;
 }
 middle = Math.floor((left + right) /2);
}
console.log( "Needle is: "+ (isIN ? "" : "not") + "in haystack");
