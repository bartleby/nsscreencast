//
//  ViewController.h
//  LoginTester
//
//  Created by ben on 8/24/13.
//  Copyright (c) 2013 Fickle Bits. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LoginService.h"
#import "AlertViewProvider.h"

@interface ViewController : UIViewController

@property (nonatomic, strong) IBOutlet UITextField *usernameTextField;
@property (nonatomic, strong) IBOutlet UITextField *passwordTextField;
@property (nonatomic, strong) IBOutlet UIButton *loginButton;

@property (nonatomic, strong) LoginService *loginService;
@property (nonatomic, strong) AlertViewProvider *alertProvider;

- (IBAction)loginTapped:(id)sender;

@end
