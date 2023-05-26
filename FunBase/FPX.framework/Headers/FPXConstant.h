//
//  FPXConstant.h
//  FPX
//
//  Created by VisonCui on 2021/8/10.
//

#ifndef FPXConstant_h
#define FPXConstant_h

#pragma mark - Init
static NSString *const FPX_FUNC_INIT            = @"init";// 初始化函数，每个模块都有初始化函数

static NSString *const FPX_FUNC_OPENURL            = @"openURL";// 初始化函数，每个模块都有初始化函数

#pragma mark - Config Keys
static NSString *const FPX_MODULE_TRACKING      = @"tracking";       // LogeAgent打点的日志
static NSString *const FPX_FUNC_TRACK           = @"track";          // LogeAgent上报方法
static NSString *const FPX_FUNC_SETGAMEINFO     = @"setGameInfo";    // LogeAgent游戏参数设置

#pragma mark - Config Keys
static NSString *const FPX_MODULE_CONFIG        = @"config";      // 配置模块名称

#pragma mark - Platform Keys
// 登录支付等基本功能
static NSString *const FPX_MODULE_PLATFORM      = @"platform";    // 登录支付模块名称
static NSString *const FPX_FUNC_LOGIN           = @"login";       // 登录方法
static NSString *const FPX_FUNC_LOGOUT          = @"logout";      // 注销方法
static NSString *const FPX_FUNC_HAS_LOGOUT      = @"hasLogout";   // 渠道是否有注销方法
static NSString *const FPX_FUNC_PAY             = @"pay";         // 支付方法

static NSString *const FPX_FUNC_HAS_USER_CENTER = @"hasUserCenter";      // 渠道是否有个人中心方法
static NSString *const FPX_FUNC_OPEN_USER_CENTER= @"openUserCenter";     // 打开渠道个人中心方法

// 上报数据
static NSString *const FPX_FUNC_ENTER_GAME      = @"enterGame";      // 进入游戏方法

// Session 登录
static NSString *const FPX_FUNC_SESSION_LOGIN   = @"sessionLogin";
// 登录
static NSString *const FPX_FUNC_LOGIN_WITH_TYPE = @"loginWithType";
// 切换账号
static NSString *const FPX_FUNC_SWITCH_ACCOUNT  = @"switchAccount";
// 账号升级
static NSString *const FPX_FUNC_ACCOUNT_UPGRADE  = @"accountUpgrade";
// 绑定
static NSString *const FPX_FUNC_BIND            = @"bind";
// 解绑
static NSString *const FPX_FUNC_UNBIND          = @"unbind";
// 是否绑定
static NSString *const FPX_FUNC_IS_BOUND        = @"isBound";
// 创建新账号
static NSString *const FPX_FUNC_CREATE_NEW_ACCOUNT = @"createNewAccount";
// type
static NSString *const FPX_PARAM_TYPE           = @"type";

#pragma mark - Tools Keys
static NSString *const FPX_MODULE_TOOLS         = @"tools";       // 工具模块名称

static NSString *const FPX_FUNC_GET_LANGUAGE    = @"getLanguage"; // 获取当前设备使用的语言方法
static NSString *const FPX_FUNC_GET_COUNTRY     = @"getCountry";  // 获取当前设备设置的国家方法
static NSString *const FPX_FUNC_GET_PACKAGE_NAME = @"getPackageName"; // 获取应用包名方法
static NSString *const FPX_FUNC_GET_APP_NAME     = @"getAppName";     // 获取应用名称方法
static NSString *const FPX_FUNC_GET_SHORT_VERSION= @"getShortVersion";// 获取short version方法
static NSString *const FPX_FUNC_GET_BUILD_VERSION= @"getBuildVersion";// 获取build version方法

#pragma mark - Advert Keys
static NSString *const FPX_MODULE_ADVERT        = @"advert";     // 广告模块名称

#pragma mark - Notice Keys
static NSString *const FPX_MODULE_NOTICE        = @"notice";     // 公告模块名称
static NSString *const FPX_FUNC_OPEN            = @"open";      // 打开公告

#pragma mark - Privacy Keys
static NSString *const FPX_MODULE_PRIVACY       = @"privacy";    // 隐私模块名称

static NSString *const FPX_MODULE_CMS           = @"cms";     // CMS模块名称

static NSString *const FPX_MODULE_WEBVIEW           = @"webview";     // webview模块名称
static NSString *const FPX_FUNC_SHOWWEBVIEW          = @"showWebView";      // webview回调

#pragma mark - Push Keys
static NSString *const FPX_MODULE_PUSH          = @"push";    // Push模块名称
static NSString *const FPX_FUNC_REGIST_DEVICE_TOKEN = @"registerDeviceToken"; // 注册推送令牌
static NSString *const FPX_FUNC_REQUEST_DEVICE_TOKEN = @"requestDeviceToken"; // 请求推送令牌

static NSString *const FPX_FUNC_IS_NOTIFICATION_ENABLED   = @"isNotificationEnabled";  // 判断用户是否授权推送
static NSString *const FPX_FUNC_CLEAR_ALL_NOTIFICATIONS = @"clearAllNotifications"; // 清除所有通知类中的推送
static NSString *const FPX_FUNC_SCHEDULE_LOCAL_NOTIFICATION = @"sendLocalNotification"; // 计划执行一条本地推送
static NSString *const FPX_FUNC_CANCEL_LOCAL_NOTIFICATION = @"cancelLocalNotification"; // 取消执行一条本地推送
static NSString *const FPX_FUNC_SUBSCRIBEREMOTETOPICS = @"subscribeRemoteTopics";   // 订阅远端推送主题
static NSString *const FPX_FUNC_UNSUBSCRIBEREMOTETOPICS = @"unsubscribeRemoteTopics";   // 退订远端推送主题
static NSString *const FPX_FUNC_MESSAGE_RECEIVED = @"onMessageReceived";     // 接收推送消息
static NSString *const FPX_FUNC_GET_PUSH_CHANNEL = @"getPushChannel";       // 获取推送渠道
static NSString *const FPX_FUNC_OPEN_NOTIFICATION_SETTING = @"openNotificationSetting";
static NSString *const FPX_FUNC_MESSAGE_CLICKED = @"onMessageClicked";     // 点击推送消息

#pragma mark - Push Keys
static NSString *const FPX_MODULE_CRASH          = @"crash";    // Crash模块名称


#pragma mark - Share Keys
static NSString *const FPX_MODULE_SHARE           = @"share";     // share模块名称
static NSString *const FPX_FUNC_SOCIALSHARE          = @"socialShare";      // share回调

#pragma mark - Error Code
static int FPXCODE_SUCCESS = 1;   // 操作成功
static int FPXCODE_FAILURE = -1;  // 操作失败
static int FPXCODE_READ_CONFIG_FAILURE = -2;// 读取配置失败

#endif /* FPXConstant_h */
