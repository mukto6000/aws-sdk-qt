// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createclassificationjobrequest.h"
#include "createclassificationjobrequest_p.h"
#include "createclassificationjobresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::CreateClassificationJobRequest
 * \brief The CreateClassificationJobRequest class provides an interface for Macie2 CreateClassificationJob requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::createClassificationJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateClassificationJobRequest::CreateClassificationJobRequest(const CreateClassificationJobRequest &other)
    : Macie2Request(new CreateClassificationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateClassificationJobRequest object.
 */
CreateClassificationJobRequest::CreateClassificationJobRequest()
    : Macie2Request(new CreateClassificationJobRequestPrivate(Macie2Request::CreateClassificationJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateClassificationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateClassificationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateClassificationJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateClassificationJobResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::CreateClassificationJobRequestPrivate
 * \brief The CreateClassificationJobRequestPrivate class provides private implementation for CreateClassificationJobRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a CreateClassificationJobRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
CreateClassificationJobRequestPrivate::CreateClassificationJobRequestPrivate(
    const Macie2Request::Action action, CreateClassificationJobRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateClassificationJobRequest
 * class' copy constructor.
 */
CreateClassificationJobRequestPrivate::CreateClassificationJobRequestPrivate(
    const CreateClassificationJobRequestPrivate &other, CreateClassificationJobRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
