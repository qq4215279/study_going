// poem
var words = [
    '伤心桥下春波绿',
    '曾是惊鸿照影来',
    '当年明月在',
    '曾照彩云归',
    '归去来兮',
    '真堪偕隐',
    '画船听雨眠',
    '愿为江水',
    '与君重逢',
    '一日不见兮',
    '思之若狂',
    '好想回到那个夏天',
    '趴在桌子上偷偷看你',
    '偷偷表白一个叫dmz的女孩',
    '你曾是我灰色人生中的一道彩虹',
    '柳絮空缱绻',
    '南风知不知',
    '我见青山多妩媚',
    '料青山见我也应如是',
    '取次花丛懒回顾',
    '半缘修道半缘君',
    '三笑徒然当一痴',
    '人生若只如初见',
    '我余光中都是你',
    '人生自是有情痴',
    '此恨不关风与月',
    '因为你，我多少适应了这个世界',
    '春蚕到死丝方尽',
    '蜡炬成灰泪始干',
    '今夜何夕',
    '见此良人',
    '愿我如星君如月',
    '夜夜流光相皎洁',
    '情不所起',
    '一往而深',
    '玲珑骰子安红豆',
    '入骨相思知不知',
    '多情只有春庭月',
    '尤为离人照落花',
    '若有知音见采',
    '不辞唱遍阳春',
    '休言半纸无多重',
    '万斛离愁尽耐担',
    '夜月一帘幽梦',
    '和光同尘',
    '杳霭流玉',
    '月落星沉',
    '霞姿月韵',
    '喜上眉梢',
    '醉后不知天在水',
    '满船星梦压星河',
    '落花人独立',
    '微雨燕双飞',
    '掬水月在手',
    '弄花香满衣',
    '夜深忽梦少年事',
    '唯梦闲人不梦君',
    '垆边人似月',
    '皓腕凝霜雪',
    '众里嫣然通一顾',
    '人间颜色如尘土',
    '若非群玉山头见',
    '会向瑶台月下逢',
    '沉鱼落雁鸟惊喧',
    '羞花闭月花愁颤',
    '解释春风无限恨',
    '沉香亭北倚阑干'
];

function randomNum(min, max) {
    var num = (Math.random() * (max - min + 1) + min).toFixed(2);
    return num;
}

function init() {
    let container = document.querySelector('.container');
    let f = document.createDocumentFragment();
    words.forEach(w => {
        let word_box = document.createElement('div');
        let word = document.createElement('div');
        word.innerText = w;
        word.classList.add('word');
        word.style.color = '#BAABDA';
        word.style.fontFamily = '楷体';
        word.style.fontSize = '20px'
        word_box.classList.add('word-box');
        word_box.style.setProperty("--margin-top", randomNum(-40, 20) + 'vh');
        word_box.style.setProperty("--margin-left", randomNum(6, 35) + 'vw');
        word_box.style.setProperty("--animation-duration", randomNum(8, 20) + 's');
        word_box.style.setProperty("--animation-delay", randomNum(-20, 0) + 's');

        word_box.appendChild(word);
        f.appendChild(word_box);


    })
    container.appendChild(f);
}

window.addEventListener('load', init);
let textone = document.querySelector('.textone').querySelector('h1');
let texttwo = document.querySelector('.texttwo').querySelector('h1');
let textthree = document.querySelector('.textthree').querySelector('h1');
let textfour = document.querySelector('.textfour').querySelector('h1');

/*我人生所学，所遇见的和所遭遇的，所有一切都是为了遇见你做准备。
每一个日子都普通，除了遇见你的那一天，天空是粉色，喝水有甜味，阳光格外温暖。
星河滚烫你是人间理想，夜风寒凉你是人间火光，万世沉浮你是人间归途。
世间万物，满天星辰是你，湖边暖风是你，柳絮飘然是你，道不尽的思念是你。
嘴角边情话是你，心里所念所想是你，眼中星辰也是你，余生所爱都是你。
倘若我赶不上凌晨五点的太阳，我就去看傍晚六点的夕阳。我的意思是，只要能等到你，晚点也没关系。
如果一辈子能跟你在一起，那就叫做将来，若没有你，那我的人生叫做将就。
人山人海之中做不了你的大英雄，希望能做一把你的大雨伞，为你挡风遮雨。
深爱藏心，久念在梦，万物都是你容颜。
大概喜欢你就是，早上想你，中午想你，晚上想你，梦里还要遇见你，马不停蹄，生生不息的去见你。
喜欢你，怎会舍得轻言放弃，除非时光逝去，我死去。
你是我眼波的温柔，你是我心里的不朽，你是我热爱这个世界的近乎全部的理由。
你说清醒容易孤独，我就陪你酩酊大醉，你说黑夜太难熬，我就陪你日夜颠倒。
你喜欢田野，喜欢春风，喜欢热烈的阳光和浩瀚的星辰宇宙。我喜欢厨房，喜欢饭菜的余香，喜欢有你在的每一寸时光。
我还是很喜欢你，像盛夏的阳光普照，不留余地。
我不敢说自己一生都会喜欢你，至少在能看见你的岁月里，只想对你一个人好。
我余生最大的梦想就是，把苦的日子熬成甜甜的糖，把你这个我爱的人永远留在我身旁。
我想要的幸福很简单：兜里有糖，肚里有墨，手里有活，卡里有钱，未来有你。
我希望有一个如你一般的人，如山间清爽的风，如古城温暖的光，从清晨到夜晚，由山野到书房，只要最后是你，就好。*/

setTimeout(function () {
    textone.innerHTML = '今晚，整片星空将为你一人闪烁';
    textone.style.color = '#E8F9FD';
    textone.style.fontFamily = '楷体'
    texttwo.style.color = '#E8F9FD';
    texttwo.style.fontFamily = '楷体'
    textthree.style.color = '#E8F9FD';
    textthree.style.fontFamily = '楷体'
    texttwo.innerHTML = '';
    textfour.style.color = '#E8F9FD';
    textfour.style.fontFamily = '楷体'
}, 8000)

setTimeout(function () {
    textone.innerHTML = '我人生所学，所遇见的和所遭遇的';
    texttwo.innerHTML = '所有一切都是为了遇见你做准备';
    textthree.innerHTML = '';
    textfour.innerHTML = '';
}, 15000)

setTimeout(function () {
    textone.innerHTML = '每一个日子都普通，除了遇见你的那一天';
    texttwo.innerHTML = '天空是粉色';
    textthree.innerHTML = '喝水有甜味';
    textfour.innerHTML = '阳光格外温暖';
}, 22000)

setTimeout(function () {
    textone.innerHTML = '星河滚烫你是人间理想';
    texttwo.innerHTML = '夜风寒凉你是人间火光';
    textthree.innerHTML = '万世沉浮你是人间归途';
    textfour.innerHTML = '';
}, 30000)

setTimeout(function () {
    textone.innerHTML = '世间万物，满天星辰是你';
    texttwo.innerHTML = '湖边暖风是你';
    textthree.innerHTML = '柳絮飘然是你';
    textfour.innerHTML = '道不尽的思念是你';
}, 38000)

setTimeout(function () {
    textone.innerHTML = '嘴角边情话是你';
    texttwo.innerHTML = '心里所念所想是你';
    textthree.innerHTML = '眼中星辰也是你';
    textfour.innerHTML = '余生所爱都是你';
}, 45000)

setTimeout(function () {
    textone.innerHTML = '倘若我赶不上凌晨五点的太阳';
    texttwo.innerHTML = '我就去看傍晚六点的夕阳';
    textthree.innerHTML = '我的意思是';
    textfour.innerHTML = '只要能等到你，晚点也没关系';
}, 52000)

setTimeout(function () {
    textone.innerHTML = '如果一辈子能跟你在一起';
    texttwo.innerHTML = '那就叫做将来';
    textthree.innerHTML = '若没有你';
    textfour.innerHTML = '那我的人生叫做将就';
}, 60000)

setTimeout(function () {
    textone.innerHTML = '人山人海之中做不了你的大英雄';
    texttwo.innerHTML = '希望能做一把你的大雨伞';
    textthree.innerHTML = '为你挡风遮雨';
    textfour.innerHTML = '';
}, 67000)

setTimeout(function () {
    textone.innerHTML = '深爱藏心';
    texttwo.innerHTML = '久念在梦';
    textthree.innerHTML = '万物都是你容颜';
    textfour.innerHTML = '';
}, 75000)

setTimeout(function () {
    textone.innerHTML = '大概喜欢你就是';
    texttwo.innerHTML = '早上想你，中午想你，晚上想你';
    textthree.innerHTML = '梦里还要遇见你，马不停蹄，生生不息的去见你';
    textfour.innerHTML = '';
}, 82000)

setTimeout(function () {
    textone.innerHTML = '喜欢你，怎会舍得轻言放弃';
    texttwo.innerHTML = '除非时光逝去，我死去';
    textthree.innerHTML = '';
    textfour.innerHTML = '';
}, 90000)

setTimeout(function () {
    textone.innerHTML = '你是我眼波的温柔';
    texttwo.innerHTML = '你是我心里的不朽';
    textthree.innerHTML = '你是我热爱这个世界的近乎全部的理由';
    textfour.innerHTML = '';
}, 97000)

setTimeout(function () {
    textone.innerHTML = '你说清醒容易孤独，我就陪你酩酊大醉';
    texttwo.innerHTML = '你说黑夜太难熬，我就陪你日夜颠倒';
    textthree.innerHTML = '';
    textfour.innerHTML = '';
}, 105000)

setTimeout(function () {
    textone.innerHTML = '你喜欢田野，喜欢春风，喜欢热烈的阳光和浩瀚的星辰宇宙';
    texttwo.innerHTML = '我喜欢厨房，喜欢饭菜的余香，喜欢有你在的每一寸时光';
    textthree.innerHTML = '';
    textfour.innerHTML = '';
}, 112000)

setTimeout(function () {
    textone.innerHTML = '我还是很喜欢你';
    texttwo.innerHTML = '像盛夏的阳光普照，不留余地';
    textthree.innerHTML = '';
    textfour.innerHTML = '';
}, 120000)

setTimeout(function () {
    textone.innerHTML = '我不敢说自己一生都会喜欢你';
    texttwo.innerHTML = '至少在能看见你的岁月里，只想对你一个人好';
    textthree.innerHTML = '';
    textfour.innerHTML = '';
}, 127000)

setTimeout(function () {
    textone.innerHTML = '我余生最大的梦想就是';
    texttwo.innerHTML = '把苦的日子熬成甜甜的糖';
    textthree.innerHTML = '把你这个我爱的人永远留在我身旁';
    textfour.innerHTML = '';
}, 134000)

setTimeout(function () {
    textone.innerHTML = '我想要的幸福很简单';
    texttwo.innerHTML = '兜里有糖，肚里有墨，手里有活，卡里有钱，未来有你';
    textthree.innerHTML = '';
    textfour.innerHTML = '';
}, 141000)

setTimeout(function () {
    textone.innerHTML = '我希望有一个如你一般的人';
    texttwo.innerHTML = '如山间清爽的风，如古城温暖的光';
    textthree.innerHTML = '从清晨到夜晚，由山野到书房';
    textfour.innerHTML = '只要最后是你，就好';
}, 147000)

setTimeout(function () {
    textone.innerHTML = '张嘉宜';
    texttwo.innerHTML = '我喜欢你';
    textthree.innerHTML = '永远和我在一起好吗！';
    textfour.innerHTML = '';
}, 155000)