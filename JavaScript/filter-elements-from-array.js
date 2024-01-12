/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let count =0;
    for (let i = 0; i < arr.length; i++){
        //console.log(i, arr[i]);
        if (fn (arr[i], count) == false){
            arr.splice(i, 1);
            i--;
        }
        count++;
    }
    return arr;
};

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {

    let tem =[];

    for (let i = 0; i < arr.length; i++){
        //console.log(i, arr[i]);
        if (fn (arr[i], i)){
            tem.push(arr[i]);
        }
    }
    return tem;
};
