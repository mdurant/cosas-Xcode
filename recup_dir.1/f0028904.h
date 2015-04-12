@charset "utf-8";
/* CSS Document */
html,body,div,ul,ol,li,dl,dt,dd,h1,h2,h3,h4,h5,h6,pre,form,p,blockquote,fieldset,input,img{margin:0px;padding:0px;}
h1,h2,h3,h4,h5,h6,pre,code,address,caption,cite,code,em,th,p,a,li,td,div{font:normal 12px "Lucida Grande", Arial, Tahoma, Helvetica, sans-serif;color:#404040;}
ul,ol{list-style:none;}
input,select,option{font-family:"Lucida Grande", Arial, Tahoma, Helvetica, sans-serif;font-size:12px;margin:0;}
fieldset,img{border:none;}
strong{color:#333;}
a,a:link{color:#3776bc;text-decoration:none;}
a:hover{color:#3776bc;text-decoration:none;}
a:focus{outline:none;}
.clear{clear:both;}
.clearer{clear:both;display:block;margin:0;padding:0;height:0;line-height:0px;font-size:0px;}
.fl{float:left;}
.fr{float:right;}
.blank{height:10px;font-size:0;}

#main{width:892px;}
#main .rightbox{float:right;width:715px;height:437px;overflow:hidden;}

/*==== tab ====*/
.menu{float:left;background:#dadfe6;width:176px;height:437px;border-right:1px solid #b0b1b3;}
.menu li{position:relative;width:176px;height:27px;}
.menu li a{display:block;background:url(images/nav_bg.gif) no-repeat;width:176px;height:27px;text-indent:-9999px;}

.menu .home a:link,
.menu .home a:visited{background-position:0 0;}
.menu .home a:hover,
.menu .home a:focus,
.menu .home a:active,
.menu .home a.curr{background-position:0 -108px;}

.menu .update a:link,
.menu .update a:visited{background-position:0 -27px;}
.menu .update a:hover,
.menu .update a:focus,
.menu .update a:active,
.menu .update a.curr{background-position:0 -135px;}

.menu .message a:link,
.menu .message a:visited{background-position:0 -54px;}
.menu .message a:hover,
.menu .message a:focus,
.menu .message a:active,
.menu .message a.curr{background-position:0 -162px;}

.menu .service a:link,
.menu .service a:visited{background-position:0 -81px;}
.menu .service a:hover,
.menu .service a:focus,
.menu .service a:active,
.menu .service a.curr{background-position:0 -189px;}

.menu .home a.curr:link,
.menu .home a.curr:visited{background-position:0 -108px;}
.menu .update a.curr:link,
.menu .update a.curr:link:visited{background-position:0 -135px;}
.menu .message a.curr:link,
.menu .message a.curr:link:visited{background-position:0 -162px;}
.menu .service a.curr:link,
.menu .service a.curr:link:visited{background-position:0 -189px;}

.menu li .tips{position:absolute;display:block;background:url(images/tips_bg.png) no-repeat;width:33px;height:18px;right:10px;top:4px;color:#fff;font-weight:bold;text-align:center;line-height:18px;}

/*==== mainbox ====*/
#homebox{width:715px;height:437px;overflow:hidden;}
#mainbox{width:892px;height:437px;overflow:hidden;}
#areabox{background:#f7f7f7;height:402px;overflow:auto;}
#areabox2{background:#f7f7f7;height:168px;overflow:auto;}
#areabox3{background:#f7f7f7;height:186px;overflow:auto;}
#areabox4{background:#f7f7f7;height:375px;overflow:auto;}

/*==== notebox ====*/
.notebox{background:url(images/bg1.png) no-repeat 0 center;height:208px;padding:0 30px;}
.notebox .pic{float:left;padding:5px 0 0 0;}
.notebox .text{float:right;width:440px;padding:15px 0 0 0;}
.notebox .text dt{font-size:24px;font-weight:bold;}
.notebox .text dd{line-height:18px;padding:20px 0 0 0;}
.notebox .text dd a{color:#404040;font-weight:bold;}

/*==== h_bottom ====*/
.h_bottom{height:186px;}
.h_bottom .title{background:url(images/tit1.gif) repeat-x;height:41px;}
.h_bottom .title h2{float:left;height:41px;line-height:41px;font-size:18px;font-weight:bold;}
.h_bottom .title .updata{background:url(images/icon_updata.png) no-repeat 15px center;padding:0 0 0 50px;width:188px;}
.h_bottom .title .message{background:url(images/icon_message.png) no-repeat 15px center;padding:0 0 0 50px;width:188px;}
.h_bottom .title .service{background:url(images/icon_service.png) no-repeat 15px center;padding:0 0 0 50px;width:188px;}
.h_bottom .item{float:left;background:url(images/bg2.gif) no-repeat right 0;width:198px;height:120px;padding:24px 20px 0 20px;font-size:11px;line-height:18px;}

.btm_line{background:url(images/bg3.gif) no-repeat;height:44px;padding:0 25px;}
.btm_line a{display:block;background:url(images/icon_play.png) no-repeat 0 center;width:150px;line-height:44px;color:#3776bc;padding:0 0 0 20px;}

/*==== top_title ====*/
.top_title{background:url(images/tit2.gif) repeat-x;height:35px;padding:0 15px;}
.top_title h2{float:left;font-size:16px;line-height:35px;}
.top_title .search{float:right;background:url(images/search_bg.png) no-repeat;width:155px;height:19px;margin:7px 0 0 0;}
.top_title .search .btn{display:block;float:left;width:20px;height:19px;}
.top_title .search .ser_k{display:block;float:left;width:120px;height:16px;padding:2px 10px 0 5px;}
.top_title .search .ser_k input{border:1px solid #fff;width:116px;height:13px;color:#666;}

.title2{background:url(images/tit3.gif) repeat-x;height:28px;padding:0 15px;}
.title2 h2{float:left;font-size:14px;line-height:28px;}

/*==== pro_item ====*/
.pro_item{padding:10px 15px;}
.blue_bg{background:#f3f6fa;}
.pro_item .pic{float:left;width:80px;padding-top:10px;text-align:center;}
.pro_item .text{float:left;width:350px;padding-left:15px;}
.pro_item .text h2 a{font-size:14px;font-weight:bold;}
.pro_item .text .dd{font-size:11px;color:#000;padding:6px 0;line-height:14px;}
.pro_item .text dl{padding-bottom:5px;}
.pro_item .text dt{color:#666;line-height:14px;}
.pro_item .text dd{background:url(images/dot1.gif) no-repeat 0 7px;line-height:16px;color:#666;}
.pro_item .download{float:right;width:213px;height:21px;padding:55px 0 0 0;}
.pro_item .download .jdt{float:left;display:block;width:103px;}
.pro_item .download .btn{float:right;display:block;width:65px;}
.pro_item .btnbox{float:right;width:64px;height:25px;padding-top:50px;}

/*==== top_line ====*/
.top_line{background:url(images/top_line.gif) repeat-x;height:27px;}
.top_line .k{float:left;display:block;background:url(images/top_line2.gif) no-repeat right 0;}
.top_line .width1{width:50px;height:20px;text-align:center;padding:7px 0 0 0;}
.top_line .width2{width:245px;height:27px;line-height:27px;font-size:11px;color:#000;padding:0 0 0 15px;}
.top_line .width3{width:80px;height:27px;line-height:27px;font-size:11px;color:#000;padding:0 0 0 15px;}
.top_line .width4{width:280px;height:27px;line-height:27px;font-size:11px;color:#000;padding:0 0 0 15px;}
.top_line .width5{width:160px;height:27px;line-height:27px;font-size:11px;color:#000;padding:0 0 0 15px;}
.top_line .width6{width:50px;height:27px;line-height:27px;font-size:11px;color:#000;text-align:center;}
.top_line .width7{width:130px;height:27px;line-height:27px;font-size:11px;color:#000;padding:0 0 0 15px;}

/*==== message_item ====*/
.message_item{height:20px;border-bottom:1px solid #f3f6fa;}
.message_item .width1{float:left;display:block;width:50px;text-align:center;padding:5px 0 0 0;}
.message_item .width2{float:left;display:block;width:245px;height:20px;line-height:20px;font-size:11px;color:#000;padding:0 0 0 15px;}
.message_item .width2 a{font-size:11px;font-weight:bold;color:#000;line-height:20px;}
.message_item .btn{float:left;display:block;width:15px;text-align:center;padding:3px 0 0 30px;}

.m_title{background:#a7ccff;height:20px;padding:0 15px;border-top:1px solid #bfbfbf;}
.m_title h3{float:left;font-size:11px;color:#000;line-height:20px;}
.m_title .time{float:right;font-size:11px;line-height:20px;}

.m_cont{padding:20px;}
.m_cont h1{color:#2e6fb8;}
.m_cont p{padding:20px 0 0 0;font-size:11px;color:#666;line-height:18px;}

/*==== s_cont ====*/
.s_cont{padding:20px 50px;}
.s_cont p{font-size:11px;color:#666;line-height:18px;}
.s_cont strong{display:block;line-height:22px;padding:20px 0 0 0;}
.s_cont .tit{font-size:12px;color:#3b7abf;font-weight:bold;}
.s_cont .xxk{display:block;line-height:18px;color:#666;font-weight:bold;}
.s_cont .star{float:left;width:10px;height:10px;padding:5px 2px 0 2px;}
.s_cont .ipt{border:1px solid #cbcbcb;}
.s_cont .btn{float:right;width:150px;height:21px;padding:10px 0 0 0;}
.s_cont .tit2{display:block;font-size:12px;color:#000;font-weight:bold;}
.s_cont .red{color:#F00;}
.s_cont .xbox{padding:5px 0 20px 0;}
.s_cont .xxk2{display:block;float:left;width:180px;color:#666;font-size:11px;}
.s_cont .xxk3{display:block;line-height:18px;color:#666;}

/*==== button ====*/
a.btn_blue,
a.btn_gray{display:block;background:url(images/btn_bg1.png) no-repeat;width:65px;height:21px;line-height:21px;text-align:center;color:#fff;font-size:11px;}
a.btn_blue:hover{background-position:0 -21px;}
a.btn_gray{background-position:0 -63px;color:#666;}
a.btn_blue2{display:block;background:url(images/btn_bg2.png) no-repeat;width:70px;height:23px;line-height:23px;color:#fff;font-size:11px;padding:0 0 0 25px;}
a.btn_blue2:hover{background-position:0 -23px;}
a.delete,
a.edit,
a.good{display:block;background:url(images/icon5.png) no-repeat;text-indent:-9999px;}
a.delete{width:15px;height:15px;background-position:-36px 0;}
a.delete:hover{background-position:-36px -16px;}
a.edit{width:14px;height:15px;background-position:0 0;}
a.edit:hover{background-position:0 -16px;}
a.good{width:16px;height:15px;background-position:-17px 0;}
a.good:hover{background-position:-17px -16px;}
a.btn_blue3{display:block;background:url(images/btn_bg3.png) no-repeat;width:94px;height:21px;line-height:21px;color:#fff;font-size:11px;padding:0 0 0 25px;}
a.btn_blue3:hover{background-position:0 -21px;}
a.btn_blue4{display:block;background:url(images/btn_bg4.png) no-repeat;width:41px;height:23px;line-height:23px;color:#fff;font-size:11px;padding:0 0 0 25px;}
a.btn_blue4:hover{background-position:0 -23px;}

/*==== tickets_item ====*/
.tickets_item{padding:12px 0;}
.tickets_item .num{float:left;width:50px;text-align:center;font-size:12px;padding:15px 0 0 0;}
.tickets_item .icon{float:left;width:50px;text-align:center;padding:18px 0 0 0;}
.tickets_item .text{float:left;width:265px;padding:0 15px;}
.tickets_item .text h3 a{color:#000;font-weight:bold; line-height:16px;}
.tickets_item .text .dd{font-size:11px;line-height:12px;color:#666;}
.tickets_item .date{float:left;width:145px;padding:15px 15px 0 15px;}
.tickets_item .btn{float:left;width:60px;padding:15px 0 0 30px;}

/*==== table ====*/
.table1 td{padding:3px 5px;}
.table1 .red{color:#F00;}
.table1 .dd{display:block;color:#999;line-height:14px;font-size:11px;padding:3px 0;}
.table1 .ipt{padding:2px;color:#666;}

/*==== news_list ====*/
.news_list{background:#fff;border-bottom:1px solid #e2e2e2;padding:12px 15px;}
.news_list.bg{background:#f3f6fa;}
.news_list dt{font-size:11px;color:#3776bc;font-weight:bold;}
.news_list dd{font-size:11px;line-height:18px;padding:5px 0 0 0;}

/*==== window ====*/
.window{background:url(images/bg4.png) no-repeat;width:531px;height:188px;margin:120px auto 0 auto;}
.window .icon{padding:25px 0;text-align:center;}
.window .text{font-size:18px;font-weight:bold;text-align:center;}
.window .text2{font-size:24px;text-align:center;}

.window2{background:url(images/bg5.png) no-repeat;width:637px;height:239px;margin:90px auto 0 auto;}
.window2 .icon{padding:25px 0;text-align:center;}
.window2 .text{font-size:18px;font-weight:bold;text-align:center;}
.window2 .dd{font-size:14px;padding:5px 0 0 0;text-align:center;}
.window2 .dd a{font-size:14px;}
.window2 .list{line-height:16px;padding:10px 90px 0 90px;}