# TPGradientButton
渐变底色按钮  TPGradientButton

 TPGradientButton *btn = [[TPGradientButton alloc]init];
    [btn addTarget:self action:@selector(clickAction) forControlEvents:UIControlEventTouchUpInside];
    btn.frame = CGRectMake(50, 100, 220, 50);
    [btn setTitle:@"TPGradientButton" forState:UIControlStateNormal];
    [btn setTitleColor:UIColor.whiteColor forState:UIControlStateNormal];
    [self.view addSubview:btn];
    
  
    [btn setGradientColor:[TPGradientColor gradientColorWithColors:@[[UIColor colorWithRed:1 green:0.24 blue:0.67 alpha:1],
                                                                     [UIColor colorWithRed:0.33 green:0.23 blue:0.78 alpha:1]]]
                 forState:UIControlStateNormal];
    // 设置 UIControlStateHighlighted 状态渐变背景
    [btn setGradientColor:[TPGradientColor gradientColorWithColors:@[[UIColor colorWithRed:1 green:0.24 blue:0.67 alpha:1],
                                                                     [UIColor colorWithRed:0.33 green:0.23 blue:0.78 alpha:1]]]
                 forState:UIControlStateHighlighted];
    // 设置 UIControlStateDisabled 状态渐变背景
    [btn setGradientColor:[TPGradientColor gradientColorWithColors:@[[UIColor colorWithRed:1 green:0.24 blue:0.67 alpha:0.3],
                                                                     [UIColor colorWithRed:0.33 green:0.23 blue:0.78 alpha:0.3]]]
                 forState:UIControlStateDisabled];
    btn.cornerRadius = 25;
    
//    btn.gradientDirection = TPDirectionTopToBottom;
//    btn.gradientDirection = TPDirectionLeftToRight;
//    btn.gradientDirection = TPDirectionLeftTopToRightBottom;
    btn.gradientDirection = TPDirectionLeftBottomToRightTop;
