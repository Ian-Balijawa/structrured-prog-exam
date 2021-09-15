const password = 'asdf';

const chars = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', '#', '*'];

function validPassword() {}

function hasAcceptableChars() {}

function charInList(list) {
	let inValidChar = false;
	for (let i = 0; i < password.length; i++) {
		for (let j = 0; j < list.length; j++) {
			console.log(password[i], list[j]);
			if (password[i] !== list[j]) {
				console.log('Invalid char found', i, password[i]);
				inValidChar = true;
				break;
			}
		}
	}
	return inValidChar;
}
function hasWildCards() {}

// for (let index = 0; index < password.length; index++) {
// 	charInList(password[index]);
// }

console.log(charInList(chars));
