//
//  ChangePasswordViewController.h
//  BiBi
//
//  Created by 武建斌 on 2019/1/2.
//  Copyright © 2019 武建斌. All rights reserved.
//

#import "BYBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface ChangePasswordViewController : BYBaseViewController


/** 内容视图 */
@property (nonatomic, strong) UIView *containerView;

/** 旧密码输入 */
@property (nonatomic, strong) UITextField *oldPasswordTF;

/** 新密码输入 */
@property (nonatomic, strong) UITextField *passwordTF;

/** 确认密码输入 */

@property(nonatomic,strong)UITextField *unpasswordTF;

/** 登录按钮 */
@property (nonatomic, strong) UIButton *loginBtn;

/** 余额 */
@property(nonatomic,strong)UILabel *yueLabel;

@end

NS_ASSUME_NONNULL_END
