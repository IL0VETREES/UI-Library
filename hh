local request = request or http_request or (identifyexecutor() == "Synapse X" and syn.request) or (http and http.request)
loadstring(request({Url="https://raw.githubusercontent.com/cypherdh/Script-Library/main/InstanceProtect",Method="GET"}).Body)()

local Library = {}

function Library:CreateWindow(Name)
	local ScreenGui = Instance.new("ScreenGui")
	local Main = Instance.new("Frame")
	local TitleBar = Instance.new("Frame")
	local UICornerrr = Instance.new("UICorner")
	local UICorner = Instance.new("UICorner")
	local Title = Instance.new("TextLabel")
	local Corners = Instance.new("Frame")
	local UICorner_2 = Instance.new("UICorner")
	local Close = Instance.new("ImageButton")
	local TurnBack = Instance.new("ImageButton")
	local TabsSelect = Instance.new("ScrollingFrame")
	local UIListLayout = Instance.new("UIListLayout")
	local PagesLabel = Instance.new("TextLabel")
	ProtectInstance(ScreenGui)
	ProtectInstance(Main)

	local RandomString = ""
	for i = 1, math.random(3,20) do
		RandomString = RandomString..string.char(math.random(97,122))
	end

	ScreenGui.Name = RandomString
	ScreenGui.Parent = cloneref(game:GetService("CoreGui"))
	ScreenGui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

	Main.Name = "Main"
	Main.Parent = ScreenGui
	Main.BackgroundColor3 = Color3.fromRGB(232, 232, 232)
	Main.ClipsDescendants = true
	Main.Position = UDim2.new(0.215790302, 0, 0.20479019, 0)
	Main.Size = UDim2.new(0, 256, 0, 366)

	UICornerrr.CornerRadius = UDim.new(0, 4)
	UICornerrr.Parent = Main

	TitleBar.Name = "Title Bar"
	TitleBar.Parent = Main
	TitleBar.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	TitleBar.Size = UDim2.new(0, 256, 0, 31)

	UICorner.CornerRadius = UDim.new(0, 4)
	UICorner.Parent = TitleBar

	Title.Name = "Title"
	Title.Parent = TitleBar
	Title.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	Title.BackgroundTransparency = 1.000
	Title.Position = UDim2.new(0.04296875, 0, 0, 0)
	Title.Size = UDim2.new(0, 245, 0, 31)
	Title.Font = Enum.Font.GothamMedium
	Title.Text = Name
	Title.TextColor3 = Color3.fromRGB(0, 0, 0)
	Title.TextSize = 13.000

	Corners.Name = "Corners"
	Corners.Parent = TitleBar
	Corners.BackgroundColor3 = Color3.fromRGB(223, 223, 223)
	Corners.BorderColor3 = Color3.fromRGB(223, 223, 223)
	Corners.Position = UDim2.new(0.01171875, 0, 1, 0)
	Corners.Size = UDim2.new(0, 252, 0, 0)

	UICorner_2.CornerRadius = UDim.new(0, 1)
	UICorner_2.Parent = Corners

	Close.Name = "Close"
	Close.Parent = TitleBar
	Close.BackgroundTransparency = 1.000
	Close.Position = UDim2.new(0.91998601, 0, 0.175241768, 0)
	Close.Size = UDim2.new(0, 20, 0, 20)
	Close.ZIndex = 2
	Close.Image = "rbxassetid://3926305904"
	Close.ImageColor3 = Color3.fromRGB(0, 0, 0)
	Close.ImageRectOffset = Vector2.new(284, 4)
	Close.ImageRectSize = Vector2.new(24, 24)
	Close.ImageTransparency = 0.100

	TurnBack.Name = "Turn Back"
	TurnBack.Parent = TitleBar
	TurnBack.BackgroundTransparency = 1.000
	TurnBack.LayoutOrder = 4
	TurnBack.Position = UDim2.new(0.01171875, 0, 0.177419364, 0)
	TurnBack.Size = UDim2.new(0, 20, 0, 20)
	TurnBack.ZIndex = 2
	TurnBack.Image = "rbxassetid://3926307971"
	TurnBack.ImageColor3 = Color3.fromRGB(15, 27, 255)
	TurnBack.ImageRectOffset = Vector2.new(124, 324)
	TurnBack.ImageRectSize = Vector2.new(36, 36)
	TurnBack.ImageTransparency = 1.000

	TabsSelect.Name = "Tabs Select"
	TabsSelect.Parent = Main
	TabsSelect.Active = true
	TabsSelect.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	TabsSelect.BackgroundTransparency = 0.999
	TabsSelect.BorderColor3 = Color3.fromRGB(232, 232, 232)
	TabsSelect.Position = UDim2.new(0, 0, 0.101092897, 0)
	TabsSelect.Size = UDim2.new(0, 256, 0, 322)
	TabsSelect.CanvasSize = UDim2.new(0, 0, 3, 0)
	TabsSelect.ScrollBarThickness = 3

	UIListLayout.Parent = TabsSelect
	UIListLayout.HorizontalAlignment = Enum.HorizontalAlignment.Center
	UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
	UIListLayout.Padding = UDim.new(0, 4)

	PagesLabel.Name = "Pages Label"
	PagesLabel.Parent = TabsSelect
	PagesLabel.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	PagesLabel.BackgroundTransparency = 1.000
	PagesLabel.Position = UDim2.new(0.044921875, 0, 0, 0)
	PagesLabel.Size = UDim2.new(0, 233, 0, 17)
	PagesLabel.Font = Enum.Font.GothamMedium
	PagesLabel.Text = "Pages"
	PagesLabel.TextColor3 = Color3.fromRGB(0, 0, 0)
	PagesLabel.TextSize = 13.000
	PagesLabel.TextXAlignment = Enum.TextXAlignment.Left

	Close.MouseButton1Click:Connect(function()
		game:GetService("TweenService"):Create(Main, TweenInfo.new(0.3), {Size = UDim2.new(0, 256, 0, 0)}):Play()
		repeat
			wait()
		until Main.Size == UDim2.new(0, 256, 0, 0)
		Main:Remove()
	end)

	TurnBack.MouseButton1Click:Connect(function()
		for i,v in pairs(Main:GetChildren()) do
			if v:IsA("ScrollingFrame") and v.Name ~= "TabsSelect" and v.Name ~= "TitleBar" and v.Name ~= "UICorner" then
				v.Visible = false
			end
		end
		if TabSelected then
			TabSelected.Visible = false
			game:GetService("TweenService"):Create(TabSelected, TweenInfo.new(0.3), {Position = UDim2.new(1, 0, 0.101, 0)}):Play()
		end
		game:GetService("TweenService"):Create(TurnBack, TweenInfo.new(0.3), {ImageTransparency = 1}):Play()
		game:GetService("TweenService"):Create(TabsSelect, TweenInfo.new(0.3), {Position = UDim2.new(0, 0, 0.101, 0)}):Play()
		TabsSelect.Visible = true
	end)

	local function dragify(Frame)
		local dragToggle = nil
		local dragSpeed = 0.25
		local dragInput = nil
		local dragStart = nil
		local dragPos = nil
		function updateInput(input)
			local Delta = input.Position - dragStart
			local Position = UDim2.new(startPos.X.Scale, startPos.X.Offset + Delta.X, startPos.Y.Scale, startPos.Y.Offset + Delta.Y)
			game:GetService("TweenService"):Create(Frame, TweenInfo.new(0.25), {Position = Position}):Play()
		end
		Frame.InputBegan:Connect(function(input)
			if (input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch) and game:GetService("UserInputService"):GetFocusedTextBox() == nil then
				dragToggle = true
				dragStart = input.Position
				startPos = Frame.Position
				input.Changed:Connect(function()
					if input.UserInputState == Enum.UserInputState.End then
						dragToggle = false
					end
				end)
			end
		end)
		Frame.InputChanged:Connect(function(input)
			if input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch then
				dragInput = input
			end
		end)
		game:GetService("UserInputService").InputChanged:Connect(function(input)
			if input == dragInput and dragToggle then
				updateInput(input)
			end
		end)
	end

	dragify(Main)

	local Tabs = {}

	function Tabs:CreateTab(Name)
		local TabSelected = Instance.new("ScrollingFrame")
		local UIListLayout = Instance.new("UIListLayout")
		local TabSeletedName = Instance.new("TextLabel")
		local Button = Instance.new("TextButton")
		local UICorner = Instance.new("UICorner")
		local arrow_forward = Instance.new("ImageButton")

		TabSelected.Name = "Tab Selected"
		TabSelected.Parent = Main
		TabSelected.Active = true
		TabSelected.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
		TabSelected.BackgroundTransparency = 0.999
		TabSelected.BorderColor3 = Color3.fromRGB(232, 232, 232)
		TabSelected.ClipsDescendants = false
		TabSelected.Position = UDim2.new(1, 0, 0.101092897, 0)
		TabSelected.Size = UDim2.new(0, 256, 0, 322)
		TabSelected.CanvasSize = UDim2.new(0, 0, 3, 0)
		TabSelected.ScrollBarThickness = 3
		TabSelected.Visible = false

		UIListLayout.Parent = TabSelected
		UIListLayout.HorizontalAlignment = Enum.HorizontalAlignment.Center
		UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
		UIListLayout.Padding = UDim.new(0, 4)

		TabSeletedName.Name = "TAB SELECTED"
		TabSeletedName.Parent = TabSelected
		TabSeletedName.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
		TabSeletedName.BackgroundTransparency = 1.000
		TabSeletedName.Position = UDim2.new(0.044921875, 0, 0, 0)
		TabSeletedName.Size = UDim2.new(0, 233, 0, 17)
		TabSeletedName.Font = Enum.Font.GothamMedium
		TabSeletedName.Text = Name
		TabSeletedName.TextColor3 = Color3.fromRGB(0, 0, 0)
		TabSeletedName.TextSize = 13.000
		TabSeletedName.TextXAlignment = Enum.TextXAlignment.Left

		Button.Name = "Button"
		Button.Parent = TabsSelect
		Button.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
		Button.Position = UDim2.new(-0.00390625, 0, 0.207650274, 0)
		Button.Size = UDim2.new(0, 236, 0, 25)
		Button.Font = Enum.Font.SourceSans
		Button.Text = "   "..Name
		Button.TextColor3 = Color3.fromRGB(0, 0, 0)
		Button.TextSize = 16.000
		Button.TextXAlignment = Enum.TextXAlignment.Left

		UICorner.CornerRadius = UDim.new(0, 4)
		UICorner.Parent = Button

		arrow_forward.Name = "arrow_forward"
		arrow_forward.Parent = Button
		arrow_forward.BackgroundTransparency = 1.000
		arrow_forward.LayoutOrder = 5
		arrow_forward.Position = UDim2.new(0.910000026, 0, 0.144999996, 0)
		arrow_forward.Size = UDim2.new(0, 18, 0, 18)
		arrow_forward.ZIndex = 2
		arrow_forward.Image = "rbxassetid://3926307971"
		arrow_forward.ImageColor3 = Color3.fromRGB(0, 0, 0)
		arrow_forward.ImageRectOffset = Vector2.new(564, 284)
		arrow_forward.ImageRectSize = Vector2.new(36, 36)

		Button.MouseButton1Click:Connect(function()

			TabsSelect.Visible = true
			--TabSelected.Visible = true
			game:GetService("TweenService"):Create(TabSelected, TweenInfo.new(0.3), {Position = UDim2.new(0, 0, 0.101, 0)}):Play()
			game:GetService("TweenService"):Create(TurnBack, TweenInfo.new(0.3), {ImageTransparency = 0}):Play()
			local test = game:GetService("TweenService"):Create(TabsSelect, TweenInfo.new(0.3), {Position = UDim2.new(-1, 0, 0.101, 0)})
			test:Play()
			wait(.2)
			TabSelected.Visible = true
			test.Completed:wait()
			TabSelected.Visible = true
			--	repeat wait() until TabsSelect.Position == UDim2.new(1, 0, 0.101, 0)
			--wait()
			--TabSelected.Visible = true
			TabsSelect.Visible = false

			--[[TabSelected.Visible = true

			TabsSelect.Visible = false]]
		end)
		-- End of CreateTab
		local TabElements = {}

		function TabElements:CreateButton(Name, Callback)
			Callback = Callback or function() end
			local Button = Instance.new("TextButton")
			local UICorner = Instance.new("UICorner")
			local Sample = Instance.new("ImageLabel")

			Button.Name = "Button"
			Button.Parent = TabSelected
			Button.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
			Button.ClipsDescendants = true
			Button.Position = UDim2.new(-0.00390625, 0, 0.207650274, 0)
			Button.Size = UDim2.new(0, 236, 0, 25)
			Button.Font = Enum.Font.SourceSans
			Button.Text = "  "..Name
			Button.TextColor3 = Color3.fromRGB(0, 0, 0)
			Button.TextSize = 16.000
			Button.TextXAlignment = Enum.TextXAlignment.Left

			UICorner.CornerRadius = UDim.new(0, 4)
			UICorner.Parent = Button

			Sample.Name = "Sample"
			Sample.Parent = Button
			Sample.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
			Sample.BackgroundTransparency = 1.000
			Sample.Image = "http://www.roblox.com/asset/?id=4560909609"
			Sample.ImageColor3 = Color3.fromRGB(167, 167, 167)
			Sample.ImageTransparency = 0.600    

			local ms = game:GetService("Players").LocalPlayer:GetMouse()

			local btn = Button
			local sample = Sample

			btn.MouseButton1Click:Connect(function()
				spawn(function()
					local c = sample:Clone()
					c.Parent = btn
					local x, y = (ms.X - c.AbsolutePosition.X), (ms.Y - c.AbsolutePosition.Y)
					c.Position = UDim2.new(0, x, 0, y)
					local len, size = 0.35, nil
					if btn.AbsoluteSize.X >= btn.AbsoluteSize.Y then
						size = (btn.AbsoluteSize.X * 1.5)
					else
						size = (btn.AbsoluteSize.Y * 1.5)
					end
					c:TweenSizeAndPosition(UDim2.new(0, size, 0, size), UDim2.new(0.5, (-size / 2), 0.5, (-size / 2)), 'Out', 'Quad', len, true, nil)
					for i = 1, 10 do
						c.ImageTransparency = c.ImageTransparency + 0.05
						wait(len / 12)
					end
					c:Destroy()
				end)
				Callback()
			end)
		end

		function TabElements:CreateToggle(Name, Callback)
			Callback = Callback or function() end
			local Toggle = Instance.new("TextButton")
			local UICorner = Instance.new("UICorner")
			local ToggleFrame = Instance.new("Frame")
			local UICorner_2 = Instance.new("UICorner")
			local Indicator = Instance.new("Frame")
			local UICorner_3 = Instance.new("UICorner")
			local Sample = Instance.new("ImageLabel")

			Toggle.Name = "Toggle"
			Toggle.Parent = TabSelected
			Toggle.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
			Toggle.ClipsDescendants = true
			Toggle.Position = UDim2.new(-0.00390625, 0, 0.207650274, 0)
			Toggle.Size = UDim2.new(0, 236, 0, 25)
			Toggle.Font = Enum.Font.SourceSans
			Toggle.Text = "   Toggle"
			Toggle.TextColor3 = Color3.fromRGB(0, 0, 0)
			Toggle.TextSize = 16.000
			Toggle.TextXAlignment = Enum.TextXAlignment.Left

			UICorner.CornerRadius = UDim.new(0, 4)
			UICorner.Parent = Toggle

			ToggleFrame.Name = "ToggleFrame"
			ToggleFrame.Parent = Toggle
			ToggleFrame.BackgroundColor3 = Color3.fromRGB(109, 109, 109)
			ToggleFrame.Position = UDim2.new(0.826271176, 0, 0.119999997, 0)
			ToggleFrame.Size = UDim2.new(0, 37, 0, 19)

			UICorner_2.CornerRadius = UDim.new(0, 4)
			UICorner_2.Parent = ToggleFrame

			Indicator.Name = "Indicator"
			Indicator.Parent = ToggleFrame
			Indicator.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
			Indicator.Position = UDim2.new(0.0500000007, 0, 0.104999997, 0)
			Indicator.Size = UDim2.new(0, 13, 0, 15)

			UICorner_3.CornerRadius = UDim.new(0, 3)
			UICorner_3.Parent = Indicator

			Sample.Name = "Sample"
			Sample.Parent = Toggle
			Sample.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
			Sample.BackgroundTransparency = 1.000
			Sample.Image = "http://www.roblox.com/asset/?id=4560909609"
			Sample.ImageColor3 = Color3.fromRGB(167, 167, 167)
			Sample.ImageTransparency = 0.600
			
			Toggle.MouseButton1Click:Connect(function()
				spawn(function()
					local ms = game:GetService("Players").LocalPlayer:GetMouse()

					local btn = script.Parent
					local sample = script:WaitForChild('Sample')

					local c = sample:Clone()
					c.Parent = btn
					local x, y = (ms.X - c.AbsolutePosition.X), (ms.Y - c.AbsolutePosition.Y)
					c.Position = UDim2.new(0, x, 0, y)
					local len, size = 0.35, nil
					if btn.AbsoluteSize.X >= btn.AbsoluteSize.Y then
						size = (btn.AbsoluteSize.X * 1.5)
					else
						size = (btn.AbsoluteSize.Y * 1.5)
					end
					c:TweenSizeAndPosition(UDim2.new(0, size, 0, size), UDim2.new(0.5, (-size / 2), 0.5, (-size / 2)), 'Out', 'Quad', len, true, nil)
					for i = 1, 10 do
						c.ImageTransparency = c.ImageTransparency + 0.05
						wait(len / 12)
					end
					c:Destroy()
				end)
				if not UILIBTOGGLE then
					UILIBTOGGLE = true
					Callback(true)
				else
					UILIBTOGGLE = false
					Callback(false)
				end
			end)
		end


			-- Create TabButton

			return TabElements
	end
	return Tabs
end

return Library
