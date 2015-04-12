@charset "utf-8";
/* CSS Document */
body,div,dl,dt,dd,ul,ol,li,h1,h2,h3,h4,h5,h6,pre,form,fieldset,input,textarea,p,blockquote,th,td {margin:0;padding:0;}
table {border-collapse:collapse;border-spacing:0;}
img {border:0;vertical-align:middle;}
address,caption,cite,code,dfn,th,var {font-style:normal;font-weight:normal;}
ol,ul {list-style:none;}
caption,th {text-align:left;}
h1,h2,h3,h4,h5,h6 {font-size:100%;font-weight:normal;}
a{ text-decoration:none;color:#464646;}
a:hover{text-decoration:underline;}
.downBtn{ display:block; background:url(btn.png) no-repeat; width:135px; height:30px; margin-right:10px;}
.downBtn:hover{ background-position:0 -30px;}
.buyBtn{ display:block; width:95px; height:30px; background:url(btn.png) no-repeat 0 -60px; margin-right:10px;}
.buyBtn:hover{ background-position:0 -90px;}
/*==============basic================*/
.fl {float:left;}
.fr {float:right;}
.clr{ clear:both;  }
.ml20{ margin-left:20px !important;}
.mt23{ margin-top:23px !important;}
.oh{ overflow:hidden;}
body{font-size:12px; line-height:1.6em; font-family:Arial, Helvetica, sans-serif; color:#464646;background:#fff; }
/*main*/
.main{ width:560px; height:455px; overflow:hidden;}
.mainNav{ height:50px; background:#454545; padding-left:8px;}
.mainNav li{ background:url(nav-_10.png) repeat-x; height:41px; line-height:41px; text-align:center; color:#fff; float:left; padding:0 17px; margin:9px 0px 0 2px; -webkit-border-top-left-radius:3px;-moz-border-top-left-radius:3px;border-top-left-radius:3px;-webkit-border-top-right-radius:3px;-moz-border-top-right-radius:3px;border-top-right-radius:3px; cursor:pointer; font-size:14px;}
.mainNav li.curr,.mainNav li:hover{ background:#fff; height:46px; line-height:46px; margin-top:4px; color:#464646;}

.content{ height:365px; overflow:auto; padding:20px;}
 
.pro-img{ overflow:hidden;width:152px; height:215px; float:left; text-align:center;}
.pro-img .price{ margin-top:5px; font-size:16px; color:#f26522;}
.pro-info{ width:345px; float:right;}
.pro-info h1{ font-size:16px; color:#0088cc; margin-bottom:8px;}
.pro-info h1 a{ color:#0088cc;}
.pro-info p,.pro-info dl{ margin-bottom:5px;}
.pro-info dl dd{ background:url(li.gif) no-repeat 0 8px; padding-left:8px;}
.list-item { padding:15px 0; border-top:1px solid #ddd;}
.list-item .get{ float:right; overflow:hidden;}
.list-item .get .down{ background:url(down_24.png) no-repeat 8px 11px #ebebeb; padding:8px 8px 8px 20px; color:#598527; border-radius:5px; overflow:hidden; }
.list-item .get .buy{ background:url(buy_28.png) no-repeat 8px 10px #ebebeb; padding:8px 8px 8px 23px; color:#e05919; border-radius:5px; overflow:hidden; }
.list-item h2{ font-size:16px; color:#0088cc; margin-bottom:8px;}
.list-item h2 a{ color:#0088cc;}
.list-item .price{ font-size:16px; color:#f26522;}
.list-item del{ color:#666; padding:0 5px;}
.adv-title{ height:35px; width:490px; margin-left:-20px;line-height:35px; background:#f26522; font-size:18px; color:#fff; text-align:center; position:relative; margin-bottom:15px;}
.adv-title span.r{ position:absolute; top:0; right:-28px; background:url(adv-bg_20.png) no-repeat; width:30px; height:40px;}