//
//  LoginController.h
//  Bancha
//
//  Created by Nicholas Valbusa on 04/11/11.
//  Copyright (c) 2011 Squallstar Studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Api.h"

@interface SettingsController : QuickDialogController  <QuickDialogStyleProvider, ApiDelegate>

+ (QRootElement *)createSettingsForm;

@end