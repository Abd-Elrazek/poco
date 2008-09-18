//
// ToggleButtonCell.h
//
// $Id: //poco/Main/WebWidgets/include/Poco/WebWidgets/ToggleButtonCell.h#6 $
//
// Library: WebWidgets
// Package: Controls
// Module:  ToggleButtonCell
//
// Definition of the ToggleButtonCell class.
//
// Copyright (c) 2007, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#ifndef WebWidgets_ToggleButtonCell_INCLUDED
#define WebWidgets_ToggleButtonCell_INCLUDED


#include "Poco/WebWidgets/Cell.h"
#include "Poco/WebWidgets/Delegate.h"


namespace Poco {
namespace WebWidgets {


class WebWidgets_API ToggleButtonCell: public Cell
	/// Cell for a ToggleButton
{
public:
	typedef Poco::AutoPtr<ToggleButtonCell> Ptr;
	
	static const std::string FIELD_VAL;
	static const std::string EV_CHECKED;

	Delegate checked;

	ToggleButtonCell(View* pOwner, const std::string& label, bool checked);
		/// Creates the ToggleButtonCell.

	void setChecked(bool checked);
		/// Sets the checked status of the object

	bool isChecked() const;
		/// Returns true if the object is checked

	void setLabel(const std::string& lbl);
		/// Sets the label of the ToggleButton

	const std::string& getLabel() const;
		/// Returns the label of the ToggleButton

	// Cell
	void handleForm(const std::string& field, const std::string& value);
	
	
	bool serializeJSON(std::ostream& out, const std::string& name);

protected:
	~ToggleButtonCell();
		/// Destroys the ToggleButtonCell.

	ToggleButtonCell(View* pOwner, const std::string& label, bool checked, const std::type_info& type);
		/// Creates a TextFieldCell.

private:
	std::string _label;
};


inline bool ToggleButtonCell::isChecked() const
{
	return getBool();
}


inline void ToggleButtonCell::setLabel(const std::string& lbl)
{
	_label = lbl;
}


inline const std::string& ToggleButtonCell::getLabel() const
{
	return _label;
}


} } // namespace Poco::WebWidgets


#endif // WebWidgets_ToggleButtonCell_INCLUDED
