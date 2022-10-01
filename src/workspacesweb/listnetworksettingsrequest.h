// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKSETTINGSREQUEST_H
#define QTAWS_LISTNETWORKSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListNetworkSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT ListNetworkSettingsRequest : public WorkSpacesWebRequest {

public:
    ListNetworkSettingsRequest(const ListNetworkSettingsRequest &other);
    ListNetworkSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
