// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlivesourcerequest.h"
#include "createlivesourcerequest_p.h"
#include "createlivesourceresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::CreateLiveSourceRequest
 * \brief The CreateLiveSourceRequest class provides an interface for MediaTailor CreateLiveSource requests.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad insertion and linear channels. With MediaTailor,
 *  you can assemble existing content into a linear stream and serve targeted ads to viewers while maintaining broadcast
 *  quality in over-the-top (OTT) video applications. For information about using the service, including detailed
 *  information about the settings covered in this guide, see the <a
 *  href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental MediaTailor User
 * 
 *  Guide</a>>
 * 
 *  Through the SDKs and the CLI you manage AWS Elemental MediaTailor configurations and channels the same as you do through
 *  the console. For example, you specify ad insertion behavior and mapping information for the origin server and the ad
 *  decision server
 *
 * \sa MediaTailorClient::createLiveSource
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLiveSourceRequest::CreateLiveSourceRequest(const CreateLiveSourceRequest &other)
    : MediaTailorRequest(new CreateLiveSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLiveSourceRequest object.
 */
CreateLiveSourceRequest::CreateLiveSourceRequest()
    : MediaTailorRequest(new CreateLiveSourceRequestPrivate(MediaTailorRequest::CreateLiveSourceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLiveSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLiveSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLiveSourceRequest::response(QNetworkReply * const reply) const
{
    return new CreateLiveSourceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::CreateLiveSourceRequestPrivate
 * \brief The CreateLiveSourceRequestPrivate class provides private implementation for CreateLiveSourceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a CreateLiveSourceRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
CreateLiveSourceRequestPrivate::CreateLiveSourceRequestPrivate(
    const MediaTailorRequest::Action action, CreateLiveSourceRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLiveSourceRequest
 * class' copy constructor.
 */
CreateLiveSourceRequestPrivate::CreateLiveSourceRequestPrivate(
    const CreateLiveSourceRequestPrivate &other, CreateLiveSourceRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
