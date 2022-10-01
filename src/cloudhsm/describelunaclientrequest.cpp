// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelunaclientrequest.h"
#include "describelunaclientrequest_p.h"
#include "describelunaclientresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::DescribeLunaClientRequest
 * \brief The DescribeLunaClientRequest class provides an interface for CloudHsm DescribeLunaClient requests.
 *
 * \inmodule QtAwsCloudHsm
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHsmClient::describeLunaClient
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLunaClientRequest::DescribeLunaClientRequest(const DescribeLunaClientRequest &other)
    : CloudHsmRequest(new DescribeLunaClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLunaClientRequest object.
 */
DescribeLunaClientRequest::DescribeLunaClientRequest()
    : CloudHsmRequest(new DescribeLunaClientRequestPrivate(CloudHsmRequest::DescribeLunaClientAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLunaClientRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLunaClientResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLunaClientRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLunaClientResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsm::DescribeLunaClientRequestPrivate
 * \brief The DescribeLunaClientRequestPrivate class provides private implementation for DescribeLunaClientRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a DescribeLunaClientRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
DescribeLunaClientRequestPrivate::DescribeLunaClientRequestPrivate(
    const CloudHsmRequest::Action action, DescribeLunaClientRequest * const q)
    : CloudHsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLunaClientRequest
 * class' copy constructor.
 */
DescribeLunaClientRequestPrivate::DescribeLunaClientRequestPrivate(
    const DescribeLunaClientRequestPrivate &other, DescribeLunaClientRequest * const q)
    : CloudHsmRequestPrivate(other, q)
{

}

} // namespace CloudHsm
} // namespace QtAws
