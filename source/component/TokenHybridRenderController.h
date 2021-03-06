//
//  TokenSSRenderController.h
//  TokenHTMLRender
//
//  Created by 陈雄 on 2017/9/23.
//  Copyright © 2017年 com.feelings. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TokenHybridRenderController : UIViewController
@property(nonatomic ,assign) BOOL         hiddenTitle;
@property(nonatomic ,assign) BOOL         allowDebug;
@property(nonatomic, copy  ) NSString     *htmlURL;
@property(nonatomic, copy  ) NSString     *htmlPath;
@property(nonatomic ,strong) NSDictionary *extension;
@property(nonatomic ,weak  ) TokenHybridRenderController *previousController;

-(instancetype)initWithHTMLURL:(NSString *)htmlURL;
-(instancetype)initWithHTML:(NSString *)html;
@end
