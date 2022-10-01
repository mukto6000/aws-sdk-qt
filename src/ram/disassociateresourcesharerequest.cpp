// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateresourcesharerequest.h"
#include "disassociateresourcesharerequest_p.h"
#include "disassociateresourceshareresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::DisassociateResourceShareRequest
 * \brief The DisassociateResourceShareRequest class provides an interface for Ram DisassociateResourceShare requests.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::disassociateResourceShare
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateResourceShareRequest::DisassociateResourceShareRequest(const DisassociateResourceShareRequest &other)
    : RamRequest(new DisassociateResourceShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateResourceShareRequest object.
 */
DisassociateResourceShareRequest::DisassociateResourceShareRequest()
    : RamRequest(new DisassociateResourceShareRequestPrivate(RamRequest::DisassociateResourceShareAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateResourceShareRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateResourceShareResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateResourceShareRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateResourceShareResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::DisassociateResourceShareRequestPrivate
 * \brief The DisassociateResourceShareRequestPrivate class provides private implementation for DisassociateResourceShareRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a DisassociateResourceShareRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
DisassociateResourceShareRequestPrivate::DisassociateResourceShareRequestPrivate(
    const RamRequest::Action action, DisassociateResourceShareRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateResourceShareRequest
 * class' copy constructor.
 */
DisassociateResourceShareRequestPrivate::DisassociateResourceShareRequestPrivate(
    const DisassociateResourceShareRequestPrivate &other, DisassociateResourceShareRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
