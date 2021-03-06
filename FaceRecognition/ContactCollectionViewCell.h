//
//  ContactCollectionViewCell.h
//  FaceRecognition
//
//  Created by Remi Robert on 11/06/16.
//  Copyright © 2016 Remi Robert. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ContactModel.h"
#import "Contact.h"

@interface ContactCollectionViewCell : UICollectionViewCell
- (void)configure:(Contact *)model;
@end
