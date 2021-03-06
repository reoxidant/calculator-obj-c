//
//  CalculatorViewController.h
//  Calculator
//
//  Created by Виталий Шаповалов on 24.09.2020.
//  Copyright © 2020 Виталий Шаповалов. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CalculatorBrain.h"

NS_ASSUME_NONNULL_BEGIN

@interface CalculatorViewController : UIViewController
{
    IBOutlet UILabel *display;
    IBOutlet UILabel *memoryStorage;
    IBOutlet UILabel *historyOfOperation;
    IBOutlet UIButton *deleteOperation;
    CalculatorBrain *brain;
    BOOL userIsInTheMiddleOfTypingANumber;
    UIAlertController *alertError;
}

- (IBAction) digitPressed: (UIButton*) sender;
- (IBAction) operationPressed: (UIButton *) sender;

@end

NS_ASSUME_NONNULL_END
