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

#ifndef QTAWS_RESOURCEGROUPSREQUEST_P_H
#define QTAWS_RESOURCEGROUPSREQUEST_P_H

namespace QtAws {
namespace ResourceGroups {

class ResourceGroupsRequest;

class ResourceGroupsRequestPrivate {

public:
    ResourceGroupsRequest::Action action; ///< ResourceGroups action to be performed.
    QString apiVersion;        ///< ResourceGroups API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ResourceGroups request (query string) parameters. @todo?

    ResourceGroupsRequestPrivate(const ResourceGroupsRequest::Action action, ResourceGroupsRequest * const q);
    ResourceGroupsRequestPrivate(const ResourceGroupsRequestPrivate &other, ResourceGroupsRequest * const q);

    static QString toString(const ResourceGroupsRequest::Action &action);

protected:
    ResourceGroupsRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(ResourceGroupsRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
