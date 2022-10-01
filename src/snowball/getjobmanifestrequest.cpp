// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobmanifestrequest.h"
#include "getjobmanifestrequest_p.h"
#include "getjobmanifestresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::GetJobManifestRequest
 * \brief The GetJobManifestRequest class provides an interface for Snowball GetJobManifest requests.
 *
 * \inmodule QtAwsSnowball
 *
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::getJobManifest
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobManifestRequest::GetJobManifestRequest(const GetJobManifestRequest &other)
    : SnowballRequest(new GetJobManifestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobManifestRequest object.
 */
GetJobManifestRequest::GetJobManifestRequest()
    : SnowballRequest(new GetJobManifestRequestPrivate(SnowballRequest::GetJobManifestAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobManifestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobManifestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobManifestRequest::response(QNetworkReply * const reply) const
{
    return new GetJobManifestResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::GetJobManifestRequestPrivate
 * \brief The GetJobManifestRequestPrivate class provides private implementation for GetJobManifestRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a GetJobManifestRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
GetJobManifestRequestPrivate::GetJobManifestRequestPrivate(
    const SnowballRequest::Action action, GetJobManifestRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobManifestRequest
 * class' copy constructor.
 */
GetJobManifestRequestPrivate::GetJobManifestRequestPrivate(
    const GetJobManifestRequestPrivate &other, GetJobManifestRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
