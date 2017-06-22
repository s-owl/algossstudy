var assert = require("assert"); //nodejs에서 제공하는 aseert 모듈
// var main = require("../1874");

describe('1874 테스트', function() {
	describe('main() 메서드', function () {
		it('값이 없을 때에는 -1 을 리턴함', function () {
			assert.equal(-1, [1,2,3].indexOf(1));
			assert.equal(-1, [1,2,3].indexOf(3));
            assert.equal(-1, [1,2,3].indexOf(2));
		});
	});
});