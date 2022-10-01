// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
