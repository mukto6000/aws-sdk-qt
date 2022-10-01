// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociates3resourcesrequest.h"
#include "disassociates3resourcesrequest_p.h"
#include "disassociates3resourcesresponse.h"
#include "macierequest_p.h"

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::DisassociateS3ResourcesRequest
 * \brief The DisassociateS3ResourcesRequest class provides an interface for Macie DisassociateS3Resources requests.
 *
 * \inmodule QtAwsMacie
 *
 *  <fullname>Amazon Macie Classic</fullname>
 * 
 *  Amazon Macie Classic has been discontinued and is no longer
 * 
 *  available>
 * 
 *  A new Amazon Macie is now available with significant design improvements and additional features, at a lower price and
 *  in most Amazon Web Services Regions. We encourage you to take advantage of the new and improved features, and benefit
 *  from the reduced cost. To learn about features and pricing for the new Macie, see <a
 *  href="http://aws.amazon.com/macie/">Amazon Macie</a>. To learn how to use the new Macie, see the <a
 *  href="https://docs.aws.amazon.com/macie/latest/user/what-is-macie.html">Amazon Macie User
 *
 * \sa MacieClient::disassociateS3Resources
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateS3ResourcesRequest::DisassociateS3ResourcesRequest(const DisassociateS3ResourcesRequest &other)
    : MacieRequest(new DisassociateS3ResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateS3ResourcesRequest object.
 */
DisassociateS3ResourcesRequest::DisassociateS3ResourcesRequest()
    : MacieRequest(new DisassociateS3ResourcesRequestPrivate(MacieRequest::DisassociateS3ResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateS3ResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateS3ResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateS3ResourcesRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateS3ResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::Macie::DisassociateS3ResourcesRequestPrivate
 * \brief The DisassociateS3ResourcesRequestPrivate class provides private implementation for DisassociateS3ResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a DisassociateS3ResourcesRequestPrivate object for Macie \a action,
 * with public implementation \a q.
 */
DisassociateS3ResourcesRequestPrivate::DisassociateS3ResourcesRequestPrivate(
    const MacieRequest::Action action, DisassociateS3ResourcesRequest * const q)
    : MacieRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateS3ResourcesRequest
 * class' copy constructor.
 */
DisassociateS3ResourcesRequestPrivate::DisassociateS3ResourcesRequestPrivate(
    const DisassociateS3ResourcesRequestPrivate &other, DisassociateS3ResourcesRequest * const q)
    : MacieRequestPrivate(other, q)
{

}

} // namespace Macie
} // namespace QtAws
