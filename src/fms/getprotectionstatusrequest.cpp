// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getprotectionstatusrequest.h"
#include "getprotectionstatusrequest_p.h"
#include "getprotectionstatusresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetProtectionStatusRequest
 * \brief The GetProtectionStatusRequest class provides an interface for Fms GetProtectionStatus requests.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::getProtectionStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetProtectionStatusRequest::GetProtectionStatusRequest(const GetProtectionStatusRequest &other)
    : FmsRequest(new GetProtectionStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetProtectionStatusRequest object.
 */
GetProtectionStatusRequest::GetProtectionStatusRequest()
    : FmsRequest(new GetProtectionStatusRequestPrivate(FmsRequest::GetProtectionStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetProtectionStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetProtectionStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProtectionStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetProtectionStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::GetProtectionStatusRequestPrivate
 * \brief The GetProtectionStatusRequestPrivate class provides private implementation for GetProtectionStatusRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetProtectionStatusRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
GetProtectionStatusRequestPrivate::GetProtectionStatusRequestPrivate(
    const FmsRequest::Action action, GetProtectionStatusRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetProtectionStatusRequest
 * class' copy constructor.
 */
GetProtectionStatusRequestPrivate::GetProtectionStatusRequestPrivate(
    const GetProtectionStatusRequestPrivate &other, GetProtectionStatusRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
