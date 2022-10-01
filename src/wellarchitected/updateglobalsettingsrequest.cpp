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

#include "updateglobalsettingsrequest.h"
#include "updateglobalsettingsrequest_p.h"
#include "updateglobalsettingsresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpdateGlobalSettingsRequest
 * \brief The UpdateGlobalSettingsRequest class provides an interface for WellArchitected UpdateGlobalSettings requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::updateGlobalSettings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGlobalSettingsRequest::UpdateGlobalSettingsRequest(const UpdateGlobalSettingsRequest &other)
    : WellArchitectedRequest(new UpdateGlobalSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGlobalSettingsRequest object.
 */
UpdateGlobalSettingsRequest::UpdateGlobalSettingsRequest()
    : WellArchitectedRequest(new UpdateGlobalSettingsRequestPrivate(WellArchitectedRequest::UpdateGlobalSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGlobalSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGlobalSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGlobalSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGlobalSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::UpdateGlobalSettingsRequestPrivate
 * \brief The UpdateGlobalSettingsRequestPrivate class provides private implementation for UpdateGlobalSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpdateGlobalSettingsRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
UpdateGlobalSettingsRequestPrivate::UpdateGlobalSettingsRequestPrivate(
    const WellArchitectedRequest::Action action, UpdateGlobalSettingsRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGlobalSettingsRequest
 * class' copy constructor.
 */
UpdateGlobalSettingsRequestPrivate::UpdateGlobalSettingsRequestPrivate(
    const UpdateGlobalSettingsRequestPrivate &other, UpdateGlobalSettingsRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
