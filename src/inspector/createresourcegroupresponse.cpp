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

#include "createresourcegroupresponse.h"
#include "createresourcegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::CreateResourceGroupResponse
 * \brief The CreateResourceGroupResponse class provides an interace for Inspector CreateResourceGroup responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::createResourceGroup
 */

/*!
 * Constructs a CreateResourceGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResourceGroupResponse::CreateResourceGroupResponse(
        const CreateResourceGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new CreateResourceGroupResponsePrivate(this), parent)
{
    setRequest(new CreateResourceGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResourceGroupRequest * CreateResourceGroupResponse::request() const
{
    return static_cast<const CreateResourceGroupRequest *>(InspectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful Inspector CreateResourceGroup \a response.
 */
void CreateResourceGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResourceGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::CreateResourceGroupResponsePrivate
 * \brief The CreateResourceGroupResponsePrivate class provides private implementation for CreateResourceGroupResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a CreateResourceGroupResponsePrivate object with public implementation \a q.
 */
CreateResourceGroupResponsePrivate::CreateResourceGroupResponsePrivate(
    CreateResourceGroupResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector CreateResourceGroup response element from \a xml.
 */
void CreateResourceGroupResponsePrivate::parseCreateResourceGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
