//
//  HBDNavigationController.h
//  HBDNavigationBar
//
//  Created by Listen on 2018/3/23.
//

#import <UIKit/UIKit.h>

@protocol TTBackButtonHandleDelegate <NSObject>

@optional

-(BOOL)navigationShouldPopOnBackButton;

@end

@interface HBDNavigationController : UINavigationController

- (void)updateNavigationBarForViewController:(UIViewController *)vc;
- (void)updateNavigationBarAlphaForViewController:(UIViewController *)vc;
- (void)updateNavigationBarColorOrImageForViewController:(UIViewController *)vc;
- (void)updateNavigationBarShadowImageIAlphaForViewController:(UIViewController *)vc;

@property (nonatomic, weak) id<TTBackButtonHandleDelegate> backDelegate;

@property (nonatomic, strong) UIBarButtonItem *leftBarButtonItem;

// Push时是否隐藏掉Tabbar 默认YES
@property (nonatomic, assign) BOOL isHidesBottomBarWhenPushed;

@end

@interface UINavigationController(UINavigationBar) <UINavigationBarDelegate>

@end
