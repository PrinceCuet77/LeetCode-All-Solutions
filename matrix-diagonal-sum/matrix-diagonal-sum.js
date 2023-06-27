/**
 * @param {number[][]} mat
 * @return {number}
 */
var diagonalSum = function(mat) {
  let result = 0

  let n = mat.length
  for ( let i = 0; i < mat.length; i++ ) {
    for ( let j = 0; j < mat[i].length; j++ ) {
      if ( i == j || j == n - 1 ) {
        result+= mat[i][j]
      }
    }
    n--
  }

  return result
};