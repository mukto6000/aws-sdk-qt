/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createaccountcustomizationrequest.h"
#include "createaccountcustomizationrequest_p.h"
#include "createaccountcustomizationresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateAccountCustomizationRequest
 * \brief The CreateAccountCustomizationRequest class provides an interface for QuickSight CreateAccountCustomization requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createAccountCustomization
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAccountCustomizationRequest::CreateAccountCustomizationRequest(const CreateAccountCustomizationRequest &other)
    : QuickSightRequest(new CreateAccountCustomizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAccountCustomizationRequest object.
 */
CreateAccountCustomizationRequest::CreateAccountCustomizationRequest()
    : QuickSightRequest(new CreateAccountCustomizationRequestPrivate(QuickSightRequest::CreateAccountCustomizationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAccountCustomizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAccountCustomizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAccountCustomizationRequest::response(QNetworkReply * const reply) const
{
    return new CreateAccountCustomizationResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateAccountCustomizationRequestPrivate
 * \brief The CreateAccountCustomizationRequestPrivate class provides private implementation for CreateAccountCustomizationRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateAccountCustomizationRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateAccountCustomizationRequestPrivate::CreateAccountCustomizationRequestPrivate(
    const QuickSightRequest::Action action, CreateAccountCustomizationRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAccountCustomizationRequest
 * class' copy constructor.
 */
CreateAccountCustomizationRequestPrivate::CreateAccountCustomizationRequestPrivate(
    const CreateAccountCustomizationRequestPrivate &other, CreateAccountCustomizationRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
