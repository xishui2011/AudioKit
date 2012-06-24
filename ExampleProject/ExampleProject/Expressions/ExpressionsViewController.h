//
//  ExpressionsViewController.h
//  ExampleProject
//
//  Created by Adam Boulanger on 6/10/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "ExpressionToneGenerator.h"

@interface ExpressionsViewController : UIViewController
{
    ExpressionToneGenerator *myToneGenerator;
}

- (IBAction)hit1:(id)sender;
- (IBAction)hit2:(id)sender;

@end