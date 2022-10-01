// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpartitionrequest.h"
#include "getpartitionrequest_p.h"
#include "getpartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetPartitionRequest
 * \brief The GetPartitionRequest class provides an interface for Glue GetPartition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getPartition
 */

/*!
 * Constructs a copy of \a other.
 */
GetPartitionRequest::GetPartitionRequest(const GetPartitionRequest &other)
    : GlueRequest(new GetPartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPartitionRequest object.
 */
GetPartitionRequest::GetPartitionRequest()
    : GlueRequest(new GetPartitionRequestPrivate(GlueRequest::GetPartitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetPartitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPartitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPartitionRequest::response(QNetworkReply * const reply) const
{
    return new GetPartitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetPartitionRequestPrivate
 * \brief The GetPartitionRequestPrivate class provides private implementation for GetPartitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetPartitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetPartitionRequestPrivate::GetPartitionRequestPrivate(
    const GlueRequest::Action action, GetPartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPartitionRequest
 * class' copy constructor.
 */
GetPartitionRequestPrivate::GetPartitionRequestPrivate(
    const GetPartitionRequestPrivate &other, GetPartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
